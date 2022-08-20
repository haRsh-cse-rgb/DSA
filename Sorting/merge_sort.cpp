#include <iostream>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void merge(int arr[], int low, int mid, int high){
   
//    int size=sizeof(arr)/sizeof(arr[0]);
   int i,j,k,a[high+1];

   i=low;
   j=mid+1;
   k=low;

   while(i<=mid &&j<=high){
       if(arr[i]<arr[j]){
           a[k]=arr[i];
           i++;
           k++;
       }
       else if(arr[i]>arr[j]){
           a[k]=arr[j];
           j++;
           k++;
       }
   }
   while(i<=mid){
       a[k]=arr[i];
       i++;
       k++;
   }
   while(j<=high){
       a[k]=arr[j];
       j++;
       k++;
   }
   for(int i=low; i<=high; i++){
       arr[i]=a[i];
   }
   
}

void mergesort(int arr[], int low, int high){

int mid;
if(low<high){
    mid=(low+high)/2;

    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr, low,mid,high);
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
    mergesort(arr, 0,size-1);
    cout << "After sorting" << endl;
    display(arr, size);

    return 0;
}
