#include <iostream>
#include <unordered_set>
using namespace std;

// int unionOfArray(int arr1[], int size1, int arr2[], int size2)
// {

//     unordered_set<int> s;
//     int count = 0;
//     for (int i = 0; i < size1; i++)
//     {
//         s.insert(arr1[i]);
//     }
//     for (int i = 0; i < size2; i++)
//     {
//         s.insert(arr2[i]);
//     }

//     return s.size();
// }


int unionOfArray(int arr1[] , int size1 , int arr2[], int size2){
    int c[size1 + size2];
    for(int i=0; i<size1; i++){
        c[i]=arr1[i];
    }
    for(int i=0 ; i<size2; i++){
        c[size1+i]=arr2[i];
    }

        int res=0;
    for(int i=0; i<size1+size2; i++){
        bool flag=false;
        for(int j=0; j<i;j++){
            if(c[i]==c[j]){
                flag=true;
                break;
            }
        }
        if(flag==false){
          res++;
        }
    }

    return res;

}
int main()
{

    int arr1[] = {15, 12, 13, 12, 13, 13, 18};
    int arr2[] = {15, 12, 130};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << unionOfArray(arr1, size1, arr2, size2);

    return 0;
}
