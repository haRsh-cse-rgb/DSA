#include<iostream>
#include<stack>

using namespace std;

void deleteMiddle(stack<int> &s){

int size=s.size();
    stack<int> st;
    int count=0;

    while(count< size/2){
      int c=s.top();
      s.pop();
      st.push(c);
      count++;
    }
    s.pop();

while(!st.empty()){
    int c=st.top();
    s.push(c);
    st.pop();
}
    



}

int main()
{

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    deleteMiddle(s);

while(!s.empty()){
    int c=s.top();
    cout<<c;
    s.pop();
}
    
    return 0;
}
