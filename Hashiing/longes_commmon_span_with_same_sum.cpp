#include <iostream>
#include <unordered_set>
#include <unordered_map>
using namespace std;

// int longestArraySum(int arr1[] , int size1 , int arr2[] , int size2){

// int result=0;
// for(int i=0; i<size1; i++){

//    int sum1=0 , sum2=0;
//   for(int j=i;j<size2;j++){
//     sum1+=arr1[j];
//     sum2+=arr2[j];
//     if(sum1==sum2){
//        result=max(result, j-i+1);
//     }
//   }
// }
// return result;
// }
    

    int longestSubArray(int arr1[], int size1, int arr2[] , int size2)
{

    int temp[size1];
    for(int i=0 ; i<size1; i++){
        temp[i]=arr1[i]-arr2[i];
    }
    unordered_map<int, int> map;

    int result = 0, preSum = 0;
    for (int i = 0; i < size1; i++)
    {
        preSum +=temp[i];

        // if (preSum == 0)
        // {
        //     return i + 1;
        // }
        if (map.find(preSum) == map.end())
        {
            map.insert({preSum, i});
        }

        if (map.find(preSum) != map.end())
        {
            result = max(result, i-map[preSum]);
        }
    }
    return result;
}


int main()
{
    int arr1[] = {0,1,0,0,0,0};
    int arr2[] = {1,0,1,0,0,1};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << longestSubArray(arr1, size1, arr2 , size2);
    return 0;
}
