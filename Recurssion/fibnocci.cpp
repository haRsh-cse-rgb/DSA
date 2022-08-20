#include<iostream>
using namespace std;

int fibnocci(int num){
    if(num==0){
        return 0;
    }
    if(num==1){
        return 1;
    }
    return fibnocci(num-1)+fibnocci(num-2);
}

int main()
{
    int num;
   
    cout<<"Enter the number you want fibnocci of"<<endl;
    cin>>num;
    cout<<"The fibnocci of the number is "<<fibnocci(num);


    return 0;
}
