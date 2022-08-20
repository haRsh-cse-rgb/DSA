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

int sumOfNodes(node *head){
    node *curr=head;
    int sum=0;
    while(curr!=NULL){
     sum+=curr->data;
     curr=curr->next;

    }
    return sum;
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
    head=insertAtLast(head,10);
    head=insertAtLast(head,30);
    head=insertAtLast(head,35);
    head=insertAtLast(head,40);
    head=insertAtLast(head,30);

    
    print(head);
   cout<<"The sum of linked list is " <<sumOfNodes(head);
    


   

  
    
    return 0;
}