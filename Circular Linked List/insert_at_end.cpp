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

void print(node *head){
    if(head==NULL){
        return;
    }

    cout<<head->data<<"->";
    for(node *p=head->next; p!=head; p=p->next){
        cout<<p->data<<"->";
    }
}

// node *insertAtEnd(node *head, int x){
//     node *temp=new node(x);

//     if(head==NULL){
//         temp->next=temp;
//         return temp;
//     }
    
    

//     node *curr=head;
//     while (curr->next!=head)
//     {
//         curr=curr->next;
//     }
//         temp->next=head;
//         curr->next=temp;
//     return head;
//     }
    

 // ++++++++++++++++++++  solution in O(1) time  +++++++++++++++++++++
node *insertAtEnd(node *head, int x){
 node *temp= new node(x);

if(head==NULL){
    temp->next=temp;
    return temp;
}
else{
temp->next=head->next;
head->next=temp;
int i;
 i=head->data;
head->data=temp->data;
temp->data=i;

return temp;
}
}   
int main()
{

    node *head=NULL;
   head= insertAtEnd(head, 1);
    head=insertAtEnd(head, 2);
    head=insertAtEnd(head, 3);
    head=insertAtEnd(head, 4);
    print(head);
    cout<<endl;
   head= insertAtEnd(head,5);
    print(head);    
    return 0;
}
