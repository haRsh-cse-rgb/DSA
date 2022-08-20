#include<iostream>

using namespace std;

struct node{

int data;
node *next;

node(int x){
    data=x;
    next=NULL;
}
};

 

 node *insertInSorted(node *head, int x){
     node *temp=new node(x);
     node *curr=head;
     if(head==NULL){
       return temp;
     }
     if(x<head->data){
        temp->next=head;
        return temp;
     }
     while(curr->next!=NULL &&curr->next->data<x ){
         
       curr=curr->next;
         
     }
     temp->next=curr->next;
     curr->next=temp;

     return head;

 }


node *insertAtLast(node *head, int x){
    node *temp=new node(x);
    if(head==NULL){
        return temp;
    }
  
    node *curr=head;

    while(curr->next!=NULL){
        curr=curr->next;
    }
   curr->next=temp;
   return head;


}
void print(node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}

int main()
{

    node *head=NULL;
    head=insertAtLast(head,10);
    head=insertAtLast(head,20);
    head=insertAtLast(head,30);


    
    print(head);
//    head=insertAtPosition(head, 1,1);
   head=insertInSorted(head, 40);
    print(head);
    
    return 0;
}
