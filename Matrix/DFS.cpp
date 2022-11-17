#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void addEdge(vector<int> arr[] , int u , int v){
    arr[u].push_back(v);
    arr[v].push_back(u);
}


void DFSrec(vector<int> arr[] , int s , bool visited[] ){
    visited[s]=true;

    cout<<s<<" ";

    for(int u : arr[s]){
        if(visited[u]==false){
            DFSrec(arr , u , visited);
        }
    }

}

void DFS(vector<int> arr[] , int v){

    bool visited[v];
    for(int i=0 ; i<v ; i++){
        visited[i]=false;

    }

    for(int i=0 ; i<v ; i++){
        if(visited[i]==false){
            DFSrec(arr , i , visited);
        }
    }
}



int main()
{
    int v=4;
    vector<int> arr[v];
    addEdge(arr , 0 , 1);
    addEdge(arr , 0 , 2);
    addEdge(arr , 1 , 2);
  
    DFS(arr , v);
    

    return 0;
}
