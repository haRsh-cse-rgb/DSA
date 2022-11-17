#include<iostream>
using namespace std;


int largestRectangleArea(int arr[] , int size){

int result=0;


    for(int i=0 ; i<size ; i++){
       int curr=arr[i];
       for(int j=i-1 ; j>=0; j--){
        if(arr[j]>=arr[i]){
            curr+=arr[i];
        }
        else{
            break;
        }
       }
       for(int j=i+1 ; j<size ; j++){
        if(arr[j]>=arr[i]){
            curr+=arr[i];
        }
        else{
            break;
        }
       }

       result=max(result,curr);
    }

return result;
}

int main()
{

    int arr[]={6,2,5,4,1,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<largestRectangleArea(arr, size);
    
    return 0;
}
