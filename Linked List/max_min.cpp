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

void maxAndmin(node *head){
    node *max=head;
    node *min=head;
    node *curr=head;

    while(curr!=NULL){
        if(curr->data>max->data){
            max=curr;
            
        }
        else if(curr->data<min->data)
        {
            min=curr;
        }
        curr=curr->next;
    }
    cout<<"minimum :"<<min->data;
    cout<<"maximum :"<<max->data;
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
    head=insertAtLast(head,100);
    head=insertAtLast(head,90);
    head=insertAtLast(head,70);
    head=insertAtLast(head,40);
    head=insertAtLast(head,5);
    head=insertAtLast(head,6);

    
    print(head);
  
    
maxAndmin(head);

   

  
    
    return 0;
}