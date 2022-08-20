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

 node *insertAtPosition(node *head, int pos, int element){
  
  node *temp=new node(element);
  node *curr=head;
  if(pos==1){
      temp->next=head;
      return temp;
  }
    if(pos>4){
        cout<<"Enter valid position";
    }

for(int i=1; i<pos-1;i++){
    curr=curr->next;
}
temp->next=curr->next;
curr->next=temp;

return head;
 
 }

node *reverseLinkedList(node *head){
   
   node *curr=head;
   node *prev=NULL;

   while(curr!=NULL){
       node *next=curr->next;
       curr->next=prev;

       prev=curr;
       curr=next;
   }
   return prev;

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
    head=insertAtLast(head,35);
    head=insertAtLast(head,40);
    head=insertAtLast(head,50);

    
    print(head);
    head=reverseLinkedList(head);
    print(head);


   

  
    
    return 0;
}