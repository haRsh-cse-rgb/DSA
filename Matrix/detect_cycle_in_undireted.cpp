#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void addEdge(vector<int> arr[], int u, int v)
{
    arr[u].push_back(v);
    arr[v].push_back(u);
}

bool DFSrec(vector<int> arr[], int s, bool visited[], int parent)
{
    visited[s] = true;

    for (int u : arr[s])
    {
        if (visited[u] == false)
        {
            if (DFSrec(arr, u, visited, s) == true)
            {
                return true;
            }
        }
        else if (u != parent)
        {
            return true;
        }
    }
    return false;
}

bool DFS(vector<int> arr[], int v)
{

    bool visited[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }

    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            if (DFSrec(arr, i, visited, -1) == true)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int v = 4;
    vector<int> arr[v];

    addEdge(arr, 0, 1);
    addEdge(arr, 0, 2);
    addEdge(arr, 1, 2);

    cout << DFS(arr, v);

    return 0;
}
