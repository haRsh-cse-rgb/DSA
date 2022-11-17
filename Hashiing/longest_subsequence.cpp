#include<bits/stdc++.h>
#include <iostream>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int longestSubsequence(int arr[] , int size){

sort(arr,arr+size);


int result=1,length=1;

for(int i=0; i<size-1 ; i++){
  if(arr[i+1]-arr[i]==1){
      length++;
     
  }
  else{
    result=max(result,length);
    length=1;
  }


}
result=max(result,length);

return result;


}
int main()
{
    int arr[] = {1,9,3,4,2,10,13};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << longestSubsequence(arr, size);
    return 0;
}
