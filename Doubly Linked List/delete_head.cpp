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

node *deleteHead(node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    node *curr=head->next;
    curr->prev=NULL;
    delete head;
    return curr;
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
    head=deleteHead(head);
    print(head);

    
    return 0;
}