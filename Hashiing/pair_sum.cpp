#include<iostream>
#include<unordered_set>
using namespace std;



// bool pairSum(int arr[] , int size , int sum){
// for (int i=0; i<size-1; i++){
//     for(int j=i+1; j<size; j++){
//         if(arr[i]+arr[j]==sum){
//             return true;
//         }
//     }
// }
// return false;
// }


bool pairSum(int arr[], int size, int sum){
  unordered_set<int> s;
  for(int i=0 ; i<size ; i++){
    if(s.find(sum-arr[i])!=s.end()){
        return true;
    }
    s.insert(arr[i]);
  }
  return false;
}

int main()
{
    int arr[]={15,12,13,12,13,13,18};
    int size=sizeof(arr)/sizeof(arr[0]);
    if(pairSum(arr,size,28)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
