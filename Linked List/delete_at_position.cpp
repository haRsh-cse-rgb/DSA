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

 node *deleteAtPosition(node *head, int pos)
{
    node *curr=head;

    
    if(head->next==NULL ){
        if(pos!=1){
        cout<<"Enter valid position";
        }
        else if(pos=1){
            delete head;
            return NULL;

        }
    }

    if(pos==1){
       node *temp=head->next;

     delete head;
      return temp;
    }

    for(int i=1; i<pos-1; i++){
       curr=curr->next;
    }

    node *temp=curr->next;
    curr->next=temp->next;
    delete temp;

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
head=insertAtLast(head,4);
head=insertAtLast(head,5);
    
    print(head);
   head=deleteAtPosition(head, 7);
    print(head);
    
    return 0;
}
