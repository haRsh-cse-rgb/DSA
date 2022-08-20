#include<iostream>
#include<unordered_set>
using namespace std;



// bool zeroSum(int arr[] , int size){
//     for(int i=0; i<size; i++){
//     int sum=0;
//         for(int j=i; j<size; j++){
//         sum+=arr[j];
//         if(sum==0){
//             return true;
//         }
//         }
//     }
//     return false;
// }


bool zeroSum(int arr[] , int size){
    unordered_set<int> s;
    int sum=0;
    for(int i=0; i<size ; i++){
        sum+=arr[i];
        if(s.find(sum)!=s.end()){
           return true;
        }
        if(sum==0){
            return true;
        }
        s.insert(sum);
    }
    return false;
}

int main()
{
    int arr[]={-3,2,1,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    if(zeroSum(arr,size)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
