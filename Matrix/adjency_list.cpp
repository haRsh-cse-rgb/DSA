#include<iostream>
#include<vector>

using namespace std;

void addEdge(vector<int> arr[] , int u , int v){
    arr[u].push_back(v);
    arr[v].push_back(u);
}


void printGraph(vector<int> arr[] , int v){
    for(int i=0 ; i<v ; i++){
        for(int x: arr[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int v=4;
    vector<int> arr[v];
    addEdge(arr , 0 , 1);
    addEdge(arr , 0 , 2);
    addEdge(arr , 1 , 2);
    addEdge(arr , 1 , 3);

    printGraph(arr , v);

    return 0;
}
