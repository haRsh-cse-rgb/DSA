#include<iostream>
#include<unordered_map>
#include <vector>
using namespace std;



//  void countFrequency(int arr[] , int size){
//     unordered_map<int ,int> h;
//     for(int i=0 ; i<size ; i++){
//         h[arr[i]]++;
//     }
//     for(auto e : h){
//       cout<<e.first<<"-->"<<e.second<<endl;
//     }
//  }

void countFrequency(int arr[] , int size){


    for(int i=0 ;i<size; i++){
        bool flag=false;
        for(int j=0; j<i; j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
        if(flag==true){
            continue;
        }
        int freq=1;
        for(int j=i+1 ; j<size ; j++){
            if(arr[i]==arr[j]){
                freq++;
            }
        }
        cout<<arr[i]<<"-->"<<freq<<endl;
    }
}


int main()
{

    int arr[]={15,12,13,12,13,13,18};
    int size=sizeof(arr)/sizeof(arr[0]);

countFrequency(arr,size);
    
    return 0;
}
