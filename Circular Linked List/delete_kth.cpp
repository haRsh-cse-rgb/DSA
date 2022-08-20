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

void print(node *head)
{
    if (head == NULL)
    {
        return;
    }

    cout << head->data << "->";
    for (node *p = head->next; p != head; p = p->next)
    {
        cout << p->data << "->";
    }
}

node *insertAtBegning(node *head, int x)
{

    node *temp = new node(x);

    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int i;
        i = head->data;
        head->data = temp->data;
        temp->data = i;

        return head;
    }
}
 node *deleteAtBegening(node * head)
    {
        
        if (head->next == head)
        {
            delete head;
            return NULL;
        }
        else{
      

           head->data=head->next->data;
           node *temp=head->next;
           head->next=temp->next;
           delete temp;
           return head;
        }
        }
    

   node * deleteAtPos(node *head, int pos){
       if(head==NULL){
           return NULL;
       }
       if(pos==1){
        return deleteAtBegening(head);
       }
      node *curr=head;
      for(int i=1; i<pos-1; i++){
          curr=curr->next;
      }
      node *temp=curr->next;
      curr->next=curr->next->next;
      delete temp;
      return head;
   }


int main()
{

    node *head = NULL;
    head = insertAtBegning(head, 6);
    head = insertAtBegning(head, 5);
    head = insertAtBegning(head, 4);
    head = insertAtBegning(head, 3);
    head = insertAtBegning(head, 2);
    head = insertAtBegning(head, 1);
    print(head);
    cout << endl;
  head=deleteAtPos(head,1);
    print(head);
    return 0;
}
