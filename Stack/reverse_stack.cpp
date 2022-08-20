#include<iostream>
#include<stack>

using namespace std;

void reverseArray(int arr[], int size){
    stack<int> s;
    int i=0;
    for(i=0; i<size; i++){
        s.push(arr[i]);
    }
    i=0;
    while(!s.empty()){
        arr[i]=s.top();
        s.pop();
        i++;
    }
}

void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    print(arr,size);
    reverseArray(arr,size);
    cout<<endl;
    print(arr,size);
    return 0;
}

