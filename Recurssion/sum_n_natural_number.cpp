#include<iostream>

using namespace std;

int sum(int size){
    
    if(size==0){
        return 0;
    }
   return size+sum(size-1);


}

int main()
{
    int size;
    cout<<"Enter the size for which you want sum"<<endl;
    cin>>size;
    int total=sum(size);
    cout<<"The sum of "<<size<<" natural number is "<<total;

    return 0;
}
