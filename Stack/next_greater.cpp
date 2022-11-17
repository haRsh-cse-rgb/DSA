#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

// void nextGreater(int arr[] , int size){
// for(int i=0 ; i<size ; i++){
//     int j;
//      for( j=i+1 ; j<size ; j++){
//         if(arr[j]>arr[i]){
//             cout<<arr[j]<<endl;
//             break;
//         }
//      }
//         if(j==size){
//             cout<<-1<<endl;
//         }
// }
// }

void nextGreater(int arr[] , int size){

vector<int> v;
stack <int> s;

s.push(arr[size-1]);
cout<<"-1"<<endl;
for(int i=size-2 ; i>=0 ; i--){
    while(s.empty()==false && s.top()<=arr[i]){
        s.pop();
    }
    int nextgr=s.empty()?(-1) : s.top();
    // cout<<nextgr<<endl;
    // s.push(arr[i]);
    v.push_back(nextgr);
    s.push(arr[i]);
}
// reverse(v.begin(), v.end() );
for(int i=0 ; i<v.size() ; i++){
    cout<<v[i]<<endl;
}

// return v;

}

int main()
{
    int arr[]={5,15,10,8,6,12,9,18};
    // vector<int> v;
    int size=sizeof(arr)/sizeof(arr[0]);
    nextGreater(arr , size);
    
    return 0;
}

