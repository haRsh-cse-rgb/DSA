#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(80);

    while(s.empty()==false){
        cout<<s.top()<<endl;
        s.pop();
    }

    // cout<<s.size()<<endl;
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.size()<<endl;
    // cout<<s.top()<<endl;
    


    return 0;
}
