#include<iostream>

using namespace std;

bool palindrome(string &str , int start, int end){
if(start>=end){
    return true;
}
if(str[start]!=str[end]){
    return false;
}
return palindrome(str, start+1, end-1);
}

int main()
{
    string str;
    cout<<"enter the string"<<endl;
    cin>>str;
   int len=str.length();
   if(palindrome(str, 0, len-1)){
       cout<<"Palindrome";
   }
   else{
    cout<<"Not Palindrome";
   }

    
    return 0;
}
