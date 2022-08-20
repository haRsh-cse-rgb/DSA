#include<iostream>
#include<unordered_set>
using namespace std;



// bool givenSum(int arr[] , int size , int givenSum){
//     for(int i=0; i<size; i++){
//     int sum=0;
//         for(int j=i; j<size; j++){
//         sum+=arr[j];
//         if(sum==givenSum){
//             return true;
//         }
//         }
//     }
//     return false;
// }


bool givenSum(int arr[] , int size , int givenSum){
    unordered_set<int> s;
    int preSum=0;
    for(int i=0; i<size; i++){
        preSum+=arr[i];
        if(givenSum==preSum){
            return true;
        }
        if(s.find(preSum-givenSum) != s.end()){
            return true;
        }
        s.insert(preSum);
    }
    return false;
}


int main()
{
    int arr[]={-3,2,1,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    if(givenSum(arr,size, -1)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
