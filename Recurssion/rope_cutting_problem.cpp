#include<iostream>
#include<algorithm>
using namespace std;

int MaxPieces(int n, int a, int b, int c){
    if(n==0){
        return 0;
    }
    if(n<0){
        return -1;
    }
    int res=max(MaxPieces(n-a,a,b,c),MaxPieces(n-b,a,b,c), MaxPieces(n-c,a,b,c));
    if(res==-1){
        return -1;
    }

    return res+1;
}


int main()
{
    

int res=MaxPieces(23,11,9,12);
cout<<res;
    return 0;
}