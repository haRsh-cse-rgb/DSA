#include <iostream>
#include <stack>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int priority (char alpha){
    if(alpha == '+' || alpha =='-')
        return 1;
 
    if(alpha == '*' || alpha =='/')
        return 2;
 
    if(alpha == '^')
        return 3;

 
    return 0;
}
string convert(string infix)
{
   
    string postfix = "";
   
    stack <int>s;

   
    for(int i=infix.length() ; i>=0; i--)
    {
      if(infix[i]==' '){
        continue;
      }
        if(infix[i]>='a' && infix[i]<='z'|| infix[i]>='A'&& infix[i]<='Z')          
        {
            postfix += infix[i];
            
        }
        
        else if(infix[i]==')')
        {
            s.push(infix[i]);
          
        }
       
        else if(infix[i]=='(')
        {
            while(s.top()!=')'){
                postfix += s.top();
                s.pop();
            }
            s.pop();
           
        }
        else            
        {
            while (!s.empty() && priority(infix[i]) <= priority(s.top())){
                postfix += s.top();
                s.pop();
            }
            s.push(infix[i]);
            
        }
    }
    while(!s.empty()){
        postfix += s.top();
        s.pop();
    }
 
 reverse(postfix.begin() , postfix.end());

    cout << "Prefix is is : " << postfix;  
    return postfix;
}

int main()
{
    string infix = "(A - B/C) * (A/K-L)"; 
    
    
    string postfix;
    postfix = convert(infix);
    
    return 0;
}