#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

string removeConsecutiveDuplicates(string str)
{

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        if(s.empty()){
            s.push(str[i]);
        }
       else if (str[i] == s.top())
        {
            s.push(str[i]);
            s.pop();
            s.pop();
        }
       
        else if (s.top() != str[i])
        {
            s.push(str[i]);
        }
    }
    
    string res="";

    while (!s.empty())
    {
        char c = s.top();
        res.push_back(c);
        s.pop();
        
    }
    reverse(res.begin() , res.end());
    return res;
}

int main()
{
    string str = "aaabbaaccd";
   cout<< removeConsecutiveDuplicates(str);

    return 0;
}
