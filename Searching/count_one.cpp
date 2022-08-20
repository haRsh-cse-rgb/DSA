#include <iostream>
using namespace std;

int Count(int arr[], int size)
{
    int low = 0, high = size - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == 0)
        {
            mid = high + 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] == 0)
            {
                return size - mid;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    
}

    int main()
    {
        int size, element;
        cout << "Enter the size of array" << endl;
        cin >> size;
        int arr[size];
        cout << "Enter the array in sorted order" << endl;

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        cout << "1 is present " << Count(arr, size) << " number of times";
        return 0;
    }
