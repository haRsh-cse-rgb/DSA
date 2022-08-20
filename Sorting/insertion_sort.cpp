#include <iostream>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void insertionsort(int arr[], int size)
{
   for(int i=1; i<size;i++){
       int key=arr[i];
       int j=i-1;
       while(j>=0&&arr[j]>key){
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=key;
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
    insertionsort(arr, size);
    cout << "After sorting" << endl;
    display(arr, size);

    return 0;
}
