#include<iostream>
using namespace std;

int binarySearch(int arr[],  int element, int low, int high,int size){


if(low>high){
    return -1;
}
int mid=(low+high)/2;
 
    if(arr[mid]<element){
       return binarySearch(arr,element,mid+1,high,size);
    }
     else if(arr[mid]>element){
       return binarySearch(arr, element, low, mid-1,size);
    }
    else{
        if(mid==size-1||arr[mid]!=arr[mid+1]){
            return mid;
        }
        else{
            return binarySearch(arr,element,mid+1,high,size);
        }
    }
    
    
}

int main()
{
    int size, element;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the array in sorted order";

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched";
    cin>>element;
    cout<<element<<" is present in index "<<binarySearch(arr,  element, 0, size-1,size);
    return 0;
}
