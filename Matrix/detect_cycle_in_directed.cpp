#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int> arr[], int u, int v)
{
    arr[u].push_back(v);
}

bool DFSres(vector<int> arr[], int s, bool visited[], bool recSt[])
{
    visited[s] = true;
    recSt[s] = true;

    for (int u : arr[s])
    {
        if (visited[u] == false && DFSres(arr, u, visited, recSt))
        {
            return true;
        }
        else if (recSt[u] == true)
        {
            return true;
        }
    }
    recSt[s] = false;

    return false;
}

bool DFS(vector<int> arr[], int v)
{

    bool visited[v];
    bool recSt[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
        recSt[i] = false;
    }

    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            if (DFSres(arr, i, visited, recSt) == true)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int v = 6;
    vector<int> arr[v];

    addEdge(arr, 0, 1);
    addEdge(arr, 2, 1);
    addEdge(arr, 2, 3);
    addEdge(arr, 3, 4);
    addEdge(arr, 4, 5);
    addEdge(arr, 5, 3);

    cout << DFS(arr, v);

    return 0;
}
