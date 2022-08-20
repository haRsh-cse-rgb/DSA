// #include<iostream>
//  using namespace std;


// void display(int arr[] , int size){
// for(int i=0 ; i<size ; i++){
// cout<<arr[i]<<" ";
// }
// }


//  void removeDuplicate(int arr[], int size){
//      for(int i=0; i<size; i++){
//          for(int j=i+1; j<size;){
//              if(arr[i]==arr[j]){
//                  for(int x=j; x<size-1;x++){
//                    arr[x]=arr[x+1];
//                    size--;
//                  }
                  
                
                     
//                  }
//                  else{
//                      j++;
//                  }
                  
//              }
//          }
//      }
    
 

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
//    removeDuplicate(arr,size);
//    cout<<"After removing duplicate items new size is "<<endl;
//    display(arr,size);
   
//      return 0;
//  }


//Using temporary array


// #include<iostream>
//  using namespace std;


// void display(int arr[] , int size){
// for(int i=0 ; i<size ; i++){
// cout<<arr[i]<<" ";
// }
// }


// int removeDuplicate(int arr[], int size){
//     int temp[size];

//     temp[0]=arr[0];
//     int res=1;
//     for(int i=1; i<size; i++){
//         if(temp[res-1]!=arr[i]){
//             temp[res]=arr[i];
//             res++;
//         }

//     }
//     for(int i=0 ; i<size; i++){
//         arr[i]=temp[i];
//     }
//     return res;
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
//   int newsize= removeDuplicate(arr,size);
//    cout<<"After removing duplicate items new size is "<<endl;
//    display(arr,newsize);
   
//      return 0;
//  }



// More efficient 

#include<iostream>
 using namespace std;


void display(int arr[] , int size){
for(int i=0 ; i<size ; i++){
cout<<arr[i]<<" ";
}
}


int removeDuplicate(int arr[], int size){
    int res=1;

    for(int i=1 ; i<size; i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
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
  int newsize= removeDuplicate(arr,size);
   cout<<"After removing duplicate items new size is "<<endl;
   display(arr,newsize);
   
     return 0;
 }



