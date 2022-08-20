#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct stack
{
    node *head;
    int sz;
    stack()
    {
        head = NULL;
        sz = 0;
    }

    void push(int x)
    {
        node *temp = new node(x);
        temp->next = head;
        head = temp;
        sz++;
    }
    int pop()
    {
        if (head == NULL)
        {
            return INT_MAX;
        }
        int res = head->data;
        node *temp = head;
        head = head->next;
        delete (temp);
        sz--;
        return res;
    }
    int size()
    {
        return sz;
    }
    int peek()
    {
        if (head == NULL)
        {
            return INT_MAX;
        }
        return head->data;
    }
};

int main()
{
    stack s;
    node *head=NULL;
    
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(7);
    cout<<s.peek()<<endl;
   cout<<s.pop()<<endl;
   cout<<s.peek()<<endl;


    return 0;
}
