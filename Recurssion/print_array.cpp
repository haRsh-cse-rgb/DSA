#include<iostream>
using namespace std;

void printarray(int arr[], int size, int i){
   
    if(i==size){
        return;
    }
    cout<<arr[i];
    i++;
    printarray(arr,size, i);
}

int main()
{
    int size;
   
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    printarray(arr,size,0);


    return 0;
}
