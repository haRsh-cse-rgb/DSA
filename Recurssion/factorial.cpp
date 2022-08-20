#include<iostream>
using namespace std;

int factorial(int num){
    if(num==1 || num==0){
        return 1;
    }
    return factorial(num-1)*num;
}

int main()
{
    int num;
   
    cout<<"Enter the number you want factorial of"<<endl;
    cin>>num;
    cout<<"The factorial of the number is "<<factorial(num);


    return 0;
}
