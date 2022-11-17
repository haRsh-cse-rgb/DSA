#include<bits/stdc++.h>
#include <iostream>
#include <unordered_set>
#include <unordered_map>
using namespace std;

// void moreThanNbyKOccurance(int arr[] , int size, int n){

// sort(arr,arr+size);

// int i=1; int count=1;
// while(i<size){
//     while(i<size && arr[i]==arr[i-1]){
//         count++;
//         i++;
//     }
//     if(count> size/n){
//         cout<<arr[i-1]<<" ";
//     }
//     count=1;
//     i++;
// }

void moreThanNbyKOccurance(int arr[] , int size, int n){
    unordered_map<int, int>m;
      
    for(int i=0; i<size; i++){
       m[arr[i]]++;
    }

    for(auto e:m){
        if(e.second>size/n){
            cout<<e.first<<" "<<endl;
        }
    }
}




int main()
{
    int arr[] = {10,10,20,30,20,10,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    moreThanNbyKOccurance(arr, size,4);
    return 0;
}
