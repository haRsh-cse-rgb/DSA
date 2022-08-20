#include<iostream>
using namespace std;

void display(int arr[] , int size){
for(int i=0 ; i<size ; i++){
cout<<arr[i]<<" ";

}
}

int findindex(int arr[], int size, int element){
    for(int i=0; i<size; i++){
         if(arr[i]==element){
             return i;
         }
    }
}
    
    void deletion(int arr[],int size, int element){
        for(int i=findindex(arr, size,element); i<size-1; i++){
              arr[i]=arr[i+1];
        }
    }
    

int main(){

    int size, element,no_element;

   
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
    cout<<"Enter the element you want to delete  ";
    cin>>element;
    cout<<"Before deletion";
    display(arr,no_element);

    deletion(arr,no_element,element);
    no_element-=1;
    cout<<"After deletion";
    display(arr,no_element);


    
    return 0;
}
