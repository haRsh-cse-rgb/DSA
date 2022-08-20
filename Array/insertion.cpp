#include<iostream>
using namespace std;

void display(int arr[] , int size){
for(int i=0 ; i<size ; i++){
cout<<arr[i]<<" ";
}
}

void insertion(int arr[] , int size , int element , int index, int capacity){
    if(size>=capacity){
        cout<<"cannot insert";
    }
    else{
    for(int i=size-1; i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    }
}
void insertAtEnd(int arr[], int size, int element, int no_element){
    arr[no_element]=element;
    
}
int main(){

    int size,element, index,no_element;

   
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
    cout<<"Enter the element to be inserted  ";
    cin>>element;
    // cout<<"Enter the index to be inserted  ";
    // cin>>index;
    cout<<"Before insertion";
    display(arr,no_element);
   insertAtEnd(arr, size, element, no_element);
  
    // insertion(arr,no_element,element,index, size);
  no_element+=1;
    cout<<"After insertion";
    display(arr,no_element);


    
    return 0;
}
