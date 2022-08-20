#include<iostream>
using namespace std;

int count(int num){
   
    if(num/10==0){
        return 1;

    }
   return 1+ count(num/10);
 
}

int main()
{
    int num;
    cout<<"Enter the digit"<<endl;
    cin>>num;
    cout<<"The number of digit in "<< num <<" is "<< count(num);

    return 0;
}
