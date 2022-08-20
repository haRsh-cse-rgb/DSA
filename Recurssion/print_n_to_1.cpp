#include<iostream>
using namespace std;

void printn(int size){
if(size==0){
    return;
}
cout<<size;
printn(size-1);
}
int main()
{
    int size;
    cout<<"Enter the size";
    cin>>size;
    printn(size);

    return 0;
}
