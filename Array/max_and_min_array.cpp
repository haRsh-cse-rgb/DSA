// #include <iostream>
// using namespace std;

// int minimum(int arr[], int size)
// {
//     int minimum = arr[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < minimum)
//         {
//             minimum = arr[i];
//         }
//     }
//     return minimum;
// }
// int maximum(int arr[], int size)
// {
//     int maximum = arr[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > maximum)
//         {
//             maximum = arr[i];
//         }
//     }
//     return maximum;
// }
// int main()
// {
//     int size;
//     cout << "Enter the size of array" << endl;
//     cin >> size;
//     int arr[size];
//     cout << "Enter the array" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "The maximum in array is " << maximum(arr, size)<<endl;
//     cout << "The minimum in array is " << minimum(arr, size);
//     return 0;
// }


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    cout<<"Enter the size of vector"<<endl;
    int size;
    cin>>size;
    vector<int> var;
    int element;
    for(int i=0; i<size; i++){
        cin>>element;
        var.push_back(element);
    }
    int max,min;
    max=*max_element(var.begin(), var.end());
    cout<<"Maximum is ->"<<max<<endl;
    min=*min_element(var.begin(), var.end());
    cout<<"Minimum is ->"<<min<<endl;

    

    return 0;
}
