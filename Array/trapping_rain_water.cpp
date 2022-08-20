#include<iostream>
#include<vector>
using namespace std;

bool sortedascending(vector<int> arr)
{
    
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[i-1])
        {
           return false;
        }
        
        
    }
    return true;
    
}
bool sorteddescending(vector<int> arr)
{
    
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > arr[i-1])
        {
           return false;
        }
        
        
    }
    return true;
    
}


int trappingRainWater(vector<int> vec){

int amt=0;
if(sortedascending(vec) || sorteddescending(vec)){
    return amt;
}

if(vec.size()<=2){
return amt;
}

else{
    
}

}


int main()
{

    vector<int> vec;
    int size,element;
    cout<<"Enter the size of vector"<<endl;
    cin>>size;
    for(int i=0; i<size; i++){
        cin>>element;
        vec.push_back(element);
    }
    
    
    return 0;
}
