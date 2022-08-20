// #include<iostream>
//  using namespace std;


// void display(int arr[] , int size){
// for(int i=0 ; i<size ; i++){
// cout<<arr[i]<<" ";
// }
// }

// void zeroesToEnd(int arr[], int size){
//     int arr1[size];
//     int start=0;
//     int count=0;
//     for(int i=0; i<size;i++){
//         if(arr[i]==0){
//              count++;
//         }
//         else {
//             arr1[start]=arr[i];
//             start++;
//         }
//     }
//     for(int i=size-count;i<size; i++){
//         arr1[i]=0;
//     }
//     cout<<"New array is";
//    for(int i=0 ; i<size; i++){
//        cout<<arr1[i]<<" ";
//    }
// }

 

//  int main()
//  {
//      int size;
//     cout << "Enter the size of array" << endl;
//     cin >> size;
//     int arr[size];
//     cout << "Enter the array" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//    cout<<"Original array is" <<endl;
//    display(arr,size);
//   zeroesToEnd(arr,size);
  
   
//      return 0;
//  }

#include<iostream>
 using namespace std;


void display(int arr[] , int size){
for(int i=0 ; i<size ; i++){
cout<<arr[i]<<" ";
}
}

void zeroesToEnd(int arr[], int size){
   int start=0;
   int count=0;
   for(int i=0 ; i<size; i++){
    if(arr[i]!=0){
        arr[start]=arr[i];
        start++;
    }
    else if(arr[i]==0){
        count++;
    }
   }
   for(int i=size-count; i<size;i++){
       arr[i]=0;
   }
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
  zeroesToEnd(arr,size);
  cout<<"New size of array is "<<endl;
  display(arr,size);
  
   
     return 0;
 }



