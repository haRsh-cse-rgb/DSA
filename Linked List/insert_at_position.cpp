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
   head=insertAtPosition(head, 18, 33);
    print(head);
    
    return 0;
}
