#include <iostream>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    return factorial(n-1)*n;

}

int countTriangles(int arr[], int size){

int count=factorial(size)/(factorial(3)*(factorial(size-3)));
return count;
}
int main()
{

    int size, element, no_element;

    cout << "Enter the size of array ";
    cin >> size;
    int arr[size];
    cout << "Enter the number of elements in array ";
    cin >> no_element;
    cout << "Enter the elements of array " << endl;
    for (int i = 0; i < no_element; i++)
    {
        cin >> arr[i];
        cout << endl;
    }
    cout<<"Number of triangles possible is " <<countTriangles(arr,size);

    return 0;
}
