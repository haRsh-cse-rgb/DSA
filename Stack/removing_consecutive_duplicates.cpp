#include<iostream>
#include<stack>
#include<string>
#include<algorithm>

using namespace std;

string removeDuplicates(string str){

    stack<char> s;
    s.push(str[0]);
    for(int i=0 ; i<str.length(); i++){
        if(s.top()!=str[i]){
            s.push(str[i]);
        }
    }
    string res="";

    
    while(!s.empty()){
        char c=s.top();
        res.push_back(c);
       
        s.pop();
        // cout<<c<<" ";
    }
    reverse(res.begin() , res.end());

return res;
    
}

int main()
{
    string str="aaaaaabaabccccccc";
   cout<< removeDuplicates(str);
    return 0;
}
