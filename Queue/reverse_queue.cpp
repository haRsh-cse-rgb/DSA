#include<bits/stdc++.h>

using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> s;
    while(q.empty()==false){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

int main()
{

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    reverseQueue(q);

    while(!q.empty()){{
        cout<<q.front()<<endl;
        q.pop();
    }}
    
    return 0;
}
