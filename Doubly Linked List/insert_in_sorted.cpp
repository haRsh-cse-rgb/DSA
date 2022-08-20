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


node *insertInSorted(node *head, int x)
{
    node *temp = new node(x);
    node *curr=head;

    if(curr->next->data > x){
         temp->next=head;
       head->prev=temp;
       return temp;
    }

    while( curr->next!=NULL && curr->next->data < x ){
      curr=curr->next;
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
    head = insertAtBegin(head, 6);
    head = insertAtBegin(head, 4);
    head = insertAtBegin(head, 3);
    head = insertAtBegin(head, 2);
    head = insertAtBegin(head, 1);
 

    print(head);
    cout << endl;
  head=insertInSorted(head,5);
    print(head);

    return 0;
}