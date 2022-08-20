#include <iostream>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void selectionsort(int arr[], int size)
{
    for(int i=0; i<size; i++){

        int min=i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[min]){
               min=j;
            }
        }
        swap(arr[min], arr[i]);
    }
}
int main()
{

    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the elements in the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    display(arr, size);
    selectionsort(arr, size);
    cout << "After sorting" << endl;
    display(arr, size);

    return 0;
}
