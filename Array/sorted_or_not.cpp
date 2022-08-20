// #include <iostream>
// #include <algorithm>
// using namespace std;

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
//     if(is_sorted(arr,arr+size)){
//         cout<<"Sorted"<<endl;
//     }
//     else{
//         cout<<"Not Sorted"<<endl;
//     }
   
//     return 0;
// }
#include <iostream>
using namespace std;

bool sorted(int arr[], int size)
{
    
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[i-1])
        {
           return false;
        }
        
        
    }
    return true;
    
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
    cout<<sorted(arr,size);
   
    return 0;
}
