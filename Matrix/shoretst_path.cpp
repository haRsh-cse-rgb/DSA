#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void addEdge(vector<int> arr[] , int u , int v){
    arr[u].push_back(v);
    arr[v].push_back(u);
}

void BFS(vector<int> arr[] , int s , bool visited[] , int distance[]){
queue<int> q;

distance[s]=0;
visited[s]=true;



q.push(s);

while(q.empty()==false){
    int u=q.front();
    q.pop();
     

    for(int v: arr[u]){
        if(visited[v]==false){
            distance[v]=distance[u] +1 ;
            visited[v]=true;
            q.push(v);
        }
    }
}


}

  void BFSDis(vector<int> arr[] , int v){
    bool visited[v+1];
    int distance[v+1];
    

    for(int i=0 ; i<v ; i++){
        visited[i]=false;
        distance[i]=INT_MAX;
    
    }

    for(int i=0 ; i<v ; i++){
        if(visited[i]==false){
            BFS(arr , i , visited , distance);
        }
    }

    for (int i=0 ; i<v ; i++){
        cout<<distance[i]<<" ";
    }
}




int main()
{
    int v=4;
    vector<int> arr[v];
    addEdge(arr , 0 , 1);
    addEdge(arr , 0 , 2);
    addEdge(arr , 1 , 2);
    addEdge(arr , 2 , 3);
    addEdge(arr , 1 , 3);
  

    BFSDis(arr, v);

    return 0;
}
