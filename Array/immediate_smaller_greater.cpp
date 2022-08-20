#include <iostream>
using namespace std;

int immediatesmall(int arr[], int size, int element){
    int result=-1;
    for(int i=0; i<size; i++){
          if(arr[i]<element){
              
              if(arr[i]>=result){
                  result=arr[i];
              }
          }
    }
    return result;
}


int main()
{
    int size, element;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter the element you want to find immediate smaller";
    cin>>element;
    cout<<"The immediate smaller element of "<<element<<" is "<<immediatesmall(arr,size,element);
    // cout<<"The immediate greater element of "<<element<<" is "<<immediategreater(arr,size,element);
    
    return 0;
}
