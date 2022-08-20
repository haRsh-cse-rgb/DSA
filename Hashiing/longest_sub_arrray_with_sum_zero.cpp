#include <iostream>
#include <unordered_set>
#include <unordered_map>
using namespace std;

// int longestArraySum(int arr[], int size, int givenSum)
// {
//     int result=0;
//     for (int i = 0; i < size; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < size; j++)
//         {
//             sum += arr[j];
//             if (sum == givenSum)
//             {
//                 result = max(result, j - i + 1);
//             }
//         }
//     }
//     return result;
// }

int longestSubArray(int arr[], int size, int givenSum)
{
    unordered_map<int, int> map;

    int result = 0, preSum = 0;
    for (int i = 0; i < size; i++)
    {
        preSum +=arr[i];

        if (preSum == givenSum)
        {
            return i + 1;
        }
        if (map.find(preSum) == map.end())
        {
            map.insert({preSum, i});
        }

        if (map.find(preSum-givenSum) != map.end())
        {
            result = max(result, i-map[preSum - givenSum]);
        }
    }
    return result;
}
int main()
{
    int arr[] = {8,3,1,5,-6,6,2,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << longestSubArray(arr, size, 4);
    return 0;
}
