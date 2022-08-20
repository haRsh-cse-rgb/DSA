#include<iostream>
using  namespace std;

struct node{
    int data;
    node *next;
    node *prev;

    node(int x){
         data=x;
         next=NULL;
         prev=NULL;
    }
};

node *insertAtBegin(node *head, int x){
    node *temp=new node(x);
   
   temp->next=head;
   if(head!=NULL){
    head->prev=temp;
   }

    return temp;
}

void print(node *head){
     if(head==NULL){
        return;
    }

    cout<<head->data<<"->";
    for(node *p=head->next; p!=NULL; p=p->next){
        cout<<p->data<<"->";
    }
}

int main()
{

    node *head=NULL;
    head=insertAtBegin(head, 4);
    head=insertAtBegin(head, 3);
    head=insertAtBegin(head, 2);
    head=insertAtBegin(head, 1);
   
    print(head);
    cout<<endl;
    head=insertAtBegin(head, 6);
    print(head);

    
    return 0;
}
