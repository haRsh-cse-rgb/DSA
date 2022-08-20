#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int element){
    int low=0,high=size-1, mid;
    while(low<=high){
    mid=(low+high)/2;
   
    if(arr[mid]<element){
        low=mid+1;
    }
    else if(arr[mid]>element){
        high=mid-1;
    }
    else{
        if(mid==0||arr[mid]!=element){
            return mid;
        }
        else{
            high=mid-1;
        }
    }
    }
return -1;
}

int main()
{
    int size, element;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the array in sorted order"<<endl;

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched";
    cin>>element;
    cout<<element<<" is present in index "<<binarySearch(arr, size, element);
    return 0;
}
