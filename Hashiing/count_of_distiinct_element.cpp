#include<iostream>
#include<unordered_set>
using namespace std;


// int countDistinct(int arr[] , int size){
   
//    unordered_set<int> s;
//    for(int i=0; i<size; i++){
//     s.insert(arr[i]);
//    }
//   return s.size();
//  }
 
 int countDistinct(int arr[], int size){
    int res=0;
    
    for(int i=0; i<size; i++){
        bool flag=false;
        for(int j=0; j<i; j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
        if(flag==false){
            res++;
        }
    }
    return res;
 }


int main()
{

    int arr[]={15,12,13,12,13,13,18};
    int size=sizeof(arr)/sizeof(arr[0]);

cout<<countDistinct(arr,size);
    
    return 0;
}
