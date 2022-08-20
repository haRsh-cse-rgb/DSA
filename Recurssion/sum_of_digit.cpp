#include<iostream>
using namespace std;

int sum(int num){
    if(num<10){
        return num;
    }
    return sum(num/10)+num%10;
}

int main()
{
    int num;
    cout<<"Enter the number to find sum"<<endl;
    cin>>num;
    cout<<"The sum of digit is "<<sum(num);

    return 0;
}
