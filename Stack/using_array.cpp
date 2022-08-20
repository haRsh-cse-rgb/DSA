#include<iostream>
using namespace std;

struct stack{
int *arr;
int top;
int cap;
stack(int c){
    cap=c;
    arr=new int(cap);
    top=-1;

}


void push(int x){
    if(top==cap-1){
        cout<<" Fuck!! Stack is full";
    }
    top++;
    arr[top]=x;
}

int pop(){
    if(top==-1){
        cout<<"Stack Underflow";
    }
    int res=arr[top];
    top--;
    return res;
}
int peek(){
    if(top==-1){
        cout<<"Add elements to get peek";
    }
    return arr[top];
}

int size(){
    return (top+1);
}
bool isEmpty(){
    return top==-1;
}
};


int main()
{
    stack s(5);
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    
    return 0;
}

