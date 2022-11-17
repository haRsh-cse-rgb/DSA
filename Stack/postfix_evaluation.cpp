#include <iostream>
#include <stack>
#include <algorithm>
#include <math.h>
using namespace std;

float result(int a, int b, char op)
{
    if (op == '^')
    {
        return pow(b, a);
    }
    if (op == '+')
    {
        return b + a;
    }
    if (op == '-')
    {
        return b - a;
    }
    if (op == '*')
    {
        return b * a;
    }
    if (op == '/')
    {
        return b / a;
    }
    else
    {
        return INT_MIN;
    }
}

float scanNum(char ch){
   int value;
   value = ch;
   return float(value-'0');
}
int evaluation(string str)
{
    int op1 = 0, op2 = 0;

    stack<int> s;
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if (c == ' ')
        {
            continue;
        }

        if (c == '*' || c == '+' || c == '-' || c == '/' || c == '^')
        {
            op1 = s.top();
            s.pop();
            
            op2 = s.top();
            s.pop();
            s.push(result(op1, op2, c));
            // cout<<op1<<" "<<op2<<" "<<res<<endl;
            
        }
        else if(c >= '0' && c <= '9')
        {
            s.push((scanNum(c)));
        }
    }
    return s.top();
}

int main()
{
    string infix="21+3*";
    

    int res = evaluation(infix);
    cout << res;

    return 0;
}
