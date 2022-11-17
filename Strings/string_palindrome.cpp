#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

// void palindrome(string str){
//     string temp=str;

//     int i=0;
//     int j=str.length()-1;
//     while(i<j){
//         char t;
//         t=str[i];
//         str[i]=str[j];
//         str[j]=t;
//         i++;
//         j--;
//     }
//    if(str==temp){
//     cout<<"Palindrome"<<endl;
//    }
//    else{
//     cout<<"Not Plaindrome"<<endl;
//    }

   
// }


void palindrome(string &str){

    string rev=str;

    reverse(rev.begin(),rev.end());

    if(rev==str){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
}

int main()
{

    string str="abba";
   palindrome(str);
    return 0;
}
