#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

 Node(int x){
   data=x;
   next=NULL;
    }

};

Node *insertAtBegening(Node *head, int x){
Node  *temp=new Node(x);
temp->next=head;
return temp;
}
// void insertAtBegening(Node *&head, int x){
// Node  *temp=new Node(x);
// temp->next=head;
// temp=head;
// }
void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}

int main()
{
    Node *head=NULL;

head=insertAtBegening(head,1);
head=insertAtBegening(head,2);
head=insertAtBegening(head,3);
print(head);
    
    return 0;
}


