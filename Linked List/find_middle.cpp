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

// int findMiddle(node *head){
// node *curr=head;
// int temp=0;
// while(curr!=NULL){
//     curr=curr->next;
//     temp++;
// }
// curr=head;
// temp=temp/2;
// for(int i=1; i<=temp; i++){
//     curr=curr->next;
// }
// return curr->data;


// }

//++++++++++++++++++++++++     ALTERNATE METHOD IN O(N) TIME         +++++++++++++++++++++++++



void findMiddle(node *head){
if(head==NULL){
    return ;
}
    node *slow=head;
    node *fast=head;
  
  while(fast!=NULL && fast->next!=NULL){
      fast=fast->next->next;
      slow=slow->next;
  }
 cout<<slow->data;
    
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
    head=insertAtLast(head,2);
    head=insertAtLast(head,28);
    head=insertAtLast(head,30);
    head=insertAtLast(head,40);
    head=insertAtLast(head,50);

    
    print(head);

//   int middle=findMiddle(head);
   
findMiddle(head);
  
    
    return 0;
}
