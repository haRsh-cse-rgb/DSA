// This takes O(n) time
#include<iostream>
 using namespace std;

 int secondLargest(int arr[], int size){
     int result=-1;
     int largest=0;

     for(int i=1 ; i<size; i++){
         if(arr[i]>arr[largest]){
             result=largest;
             largest=i;

         }
         else if(arr[i]!= arr[largest]){
             if(result==-1 || arr[i]>arr[result]){
                 result=i;
             }
         }
     }
     return result;
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
     cout<<"The second largest number lies in index " <<secondLargest(arr,size)<<" and it is "<<arr[secondLargest(arr,size)];
   
     return 0;
 }


//This takes O(n+n) time.

// #include<iostream>
//  using namespace std;

//  int largest(int arr[], int size){
//      int max=0;
//      for(int i=0; i<size;i++){
//          if(arr[i]>arr[max]){
//              max=i;
//          }
//      }
//      return max;
//  }

//  int secondlargest(int arr[], int size){
//     int large= largest(arr, size);
//      int result=-1;
//      for(int i=0; i<size; i++){
//          if(arr[i]!=arr[large]){
//              if(result==-1){
//                  result=i;
//              }
//              else if(arr[i]>arr[result]){
//                  result=i;
//              }
//          }
//      }
//      return result;
//  }

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
    
//    cout<<"The second largest number lies in index " <<secondlargest(arr,size)<<" and it is "<<arr[secondlargest(arr,size)];
//      return 0;
//  }
 