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

 int sortedOrNot(node *head){
     node *curr=head;
    
     while(curr!=NULL && curr->next!=NULL){
         if(curr->data>curr->next->data){
             return -1;
         }
         
         curr=curr->next;
         
  
    
     }
     return 1;
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
head=insertAtLast(head,5);
head=insertAtLast(head,30);
head=insertAtLast(head,40);
    
    print(head);
  cout<<sortedOrNot(head);
  
    
    return 0;
}
