#include<iostream>
using namespace std;

void TOH(int num, char A, char B, char C){
    if(num==1){
        cout<<"Move 1 from "<<A <<" to "<<C<<endl;
        return;
    }
    TOH(num-1, A,C,B);
    cout<<"Move "<<num<<"from "<<A<<" to "<<C<<endl;
    TOH(num-1, B,A,C);
}
int main()
{
    int num;
   
    cout<<"Enter the number of disc"<<endl;
    cin>>num;
    TOH(num,'A','B','C');


    return 0;
}
