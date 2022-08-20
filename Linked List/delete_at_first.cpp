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

 node *deleteAtFirst(node *head){
 if(head==NULL){
     return NULL;
 }
 else{
     node *temp=head->next;

     delete head;
 return temp;
 }
 
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
    head=insertAtLast(head,1);
head=insertAtLast(head,2);
head=insertAtLast(head,3);
    
    print(head);
head=deleteAtFirst(head);
    print(head);
    
    return 0;
}
