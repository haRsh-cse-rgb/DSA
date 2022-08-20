#include<iostream>
using namespace std;

void display(int arr[] , int size){
for(int i=0 ; i<size ; i++){
cout<<arr[i]<<" ";
}
}

void deletion(int arr[] , int size , int index){

    for(int i=index; i<size-1;i++){
        arr[i]=arr[i+1];
    }
    
}
int main(){

    int size, index,no_element;

   
    cout<<"Enter the size of array ";
    cin>>size;
    int arr[size];
    cout<<"Enter the number of elements in array ";
    cin>>no_element;
    cout<<"Enter the elements of array "<<endl;
    for(int i=0; i<no_element;i++){
        cin>>arr[i];
        cout<<endl;
    }
    cout<<"Enter the index where you have to delete  ";
    cin>>index;
    cout<<"Before deletion";
    display(arr,no_element);

    deletion(arr,no_element,index);
    no_element-=1;
    cout<<"After deletion";
    display(arr,no_element);


    
    return 0;
}
