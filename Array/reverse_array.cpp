#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;


void display(vector<int> arr , int size){
for(int i=0 ; i<size ; i++){
cout<<arr[i];
}
}

int main()
{
    vector<int> arr={1,2,3,4,5,6,7};
    display(arr,arr.size());
    cout<<endl;
    reverse(arr.begin(),arr.end());
    display(arr,arr.size());

    return 0;
}
// #include<iostream>

// using namespace std;

// void reverse( int arr[] , int size){
// int start=0;
// int end=size-1;
// int temp;
// while(start<end){
// temp=arr[start];
// arr[start]=arr[end];
// arr[end]=temp;
// start++;
// end--;
// }
// }
// void display(int arr[] , int size){
// for(int i=0 ; i<size ; i++){
// cout<<arr[i]<<endl;
// }
// }

// int main()
// {
//     int size;
//     cout<<"Enter the size of array"<<endl;
//     cin>>size;
//     int arr[size];
//     cout<<"Enter the array"<<endl;
//     for(int i=0 ; i<size ; i++){
//         cin>>arr[i];
       
//     }
// cout<<"Original size is "<<endl;
// display(arr, size);
// reverse(arr , size);
// cout<<"After reversing"<<endl;
// display(arr, size);

//     return 0;
// }
