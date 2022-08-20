#include <iostream>
#include <unordered_set>
#include <unordered_map>
using namespace std;

// int longestSubArray(int arr[] , int size){
//     int result=0;
//     for(int i=0 ; i<size ; i++){

//         int count0=0, count1=0;
//         for(int j=i; j<size;j++){
//             if(arr[j]==1){
//                 count1++;
//             }
//             else if(arr[j]==0){
//                 count0++;
//             }
//             if(count0==count1){
//                 result=max(result,j-i+1);
//             }
//         }
//     }
//     return result;
// }

int longestSubArray(int arr[], int size, int givenSum)
{
    unordered_map<int, int> map;

for(int i=0;i<size;i++){
    if(arr[i]==0){
        arr[i]=-1;
    }
    else{
        arr[i]=1;
    }
}
    int result = 0, preSum = 0;
    for (int i = 0; i < size; i++)
    {
       
        preSum +=arr[i];

        // if (preSum == 0)
        // {
        //     return max(result,i + 1);
        // }
        if (map.find(preSum) == map.end())
        {
            map.insert({preSum, i});
        }

        if (map.find(preSum) != map.end())
        {
            result = max(result, i-map[preSum - givenSum]);
        }
        
    }
    return result;
}



int main()
{
    int arr[] = {0,1,1,0,0,1,1,1,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<longestSubArray(arr,size,0);
    
    return 0;
}
