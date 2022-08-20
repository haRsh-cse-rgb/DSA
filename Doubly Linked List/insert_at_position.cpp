#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;

    node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

node *insertAtBegin(node *head, int x)
{
    node *temp = new node(x);

    temp->next = head;
    if (head != NULL)
    {
        head->prev = temp;
    }

    return temp;
}

void print(node *head)
{
    if (head == NULL)
    {
        return;
    }
    node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
}


node *insertAtposition(node *head, int pos, int x)
{
    node *temp = new node(x);
    node *curr = head;
    int count=0;
    while (curr != NULL )
    {
        count++;
        curr = curr->next;
    }
    cout<<count<<endl;
    if (head == NULL && pos == 1)
    {
        temp->next = head;
        temp->prev = head;
        return temp;
    }
    if (count < pos)
    {
        cout << "Enter valid position";
    }
     if(pos==1){
       temp->next=head;
       head->prev=temp;
       return temp;
     }

    curr = head;
    for (int i = 1; i < pos - 1; i++)
    {
        curr = curr->next;
    }
    curr->next->prev = temp;
    temp->next = curr->next;
    curr->next = temp;
    temp->prev = curr;
    return head;
}

int main()
{

    node *head = NULL;
    head = insertAtBegin(head, 4);
    head = insertAtBegin(head, 3);
    head = insertAtBegin(head, 2);
    head = insertAtBegin(head, 1);
    // head = insertAtBegin(head, 1);

    print(head);
    cout << endl;
    head = insertAtposition(head, 1, 20);
    print(head);

    return 0;
}