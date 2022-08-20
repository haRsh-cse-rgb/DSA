#include<iostream>
#include<unordered_set>
using namespace std;


int countDistinct(int arr1[] , int size1 , int arr2[] , int size2){
   
   unordered_set<int> s;
   int count=0;
   for(int i=0; i<size1; i++){
    s.insert(arr1[i]);
   }

for(int i=0 ; i<size2; i++){
    if(s.find(arr2[i])!=s.end()){
        count++;
        s.erase(arr2[i]);
    }
}
return count;
   
   }
  
 
 
 


int main()
{

    int arr1[]={15,12,13,12,13,13,18};
    int arr2[]={150,120,130};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);

cout<<countDistinct(arr1,size1,arr2,size2);
    
    return 0;
}
