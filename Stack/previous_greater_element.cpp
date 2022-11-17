#include<iostream>
#include<stack>
using namespace std;

// void previousGreater(int arr[] , int size){

// int max=arr[0];
// for(int i=0 ; i<size ; i++){
// int prev=-1;
// int j;
//    for( j=i-1 ; j>=0 ; j--){
//      if(arr[j]>arr[i]){
//         prev=arr[j];
//         cout<<prev<<endl;

//         break;
//      }
    
//      }
//      if(j==-1){
//         cout<<-1<<endl;
//      }
    
//    }
// }


void previousGreater(int arr[] , int size){
    stack<int> s;
s.push(arr[0]);
    for(int i=0 ; i<size ; i++){
       while(s.empty()==false && arr[i]>=s.top()){
        s.pop();
       }
     int result=s.empty()?-1:s.top();
     cout<<result<<endl;
     s.push(arr[i]);
    }

}


int main()
{

    int arr[]={15,10,18,12,4,6,2,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    previousGreater(arr , size);

    
    return 0;
}
