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


// node *insertAtBegning(node *head, int x){
// node *temp=new node(x);

//     if(head==NULL){
//         temp->next=temp;
//     }
// else{
// node *curr=head;
//     while(curr->next!=head){
//         curr=curr->next;
//     }
//     curr->next=temp;
//     temp->next=head;
// }
//     return temp;
// }

//+++++++++++++++++++++Insertion in O(1 time)

node *insertAtBegning(node *head, int x){

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

return head;
}


}

int main()
{

    node *head=NULL;
   head= insertAtBegning(head, 1);
    head=insertAtBegning(head, 2);
    head=insertAtBegning(head, 3);
    head=insertAtBegning(head, 4);
    print(head);
    cout<<endl;
   head= insertAtBegning(head,5);
    print(head);    
    return 0;
}
