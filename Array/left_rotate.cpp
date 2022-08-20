#include<iostream>
 using namespace std;


void display(int arr[] , int size){
for(int i=0 ; i<size ; i++){
cout<<arr[i]<<" ";
}
}

void leftRotate(int arr[], int size){
    int temp=arr[0];

    for(int i=1;i<size;i++){
        arr[i-1]=arr[i];
    }
    arr[size-1]=temp;

}


 int main()
 {
     int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
   cout<<"Original array is" <<endl;
   display(arr,size);
  leftRotate(arr,size);
  cout<<"New size of array is "<<endl;
  display(arr,size);
  
   
     return 0;
 }



