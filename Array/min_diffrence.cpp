#include<iostream>
using namespace std;

void display(int arr[] , int size){
for(int i=0 ; i<size ; i++){
cout<<arr[i]<<" ";

}
}

int minDiffrence(int arr[], int size){
    int diff=INT_MAX;
   for(int i=0; i<size-1;i++){
       for(int j=i+1; j<size; j++){
           if(abs(arr[i]-arr[j])<diff){
               diff=abs(arr[i]-arr[j]);
           }
       }
   }
   return diff;
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
    cout<<"The minimum diffrence is " <<minDiffrence(arr,size);


    
    return 0;
}
