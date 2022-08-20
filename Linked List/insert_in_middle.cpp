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

void insertInMiddle(node *head, int x){

 
node *curr=head;
int temp=0;
while(curr!=NULL){
    curr=curr->next;
    temp++;
}
curr=head;
temp=temp/2;

if(temp%2==0){
for(int i=1;i<temp; i++){
    curr=curr->next;
}
}
else{
for(int i=1;i<=temp; i++){
    curr=curr->next;
}
}

  node *mid=new node(x);
  node *tempo=curr->next;
  curr->next=mid;
  mid->next=tempo;

    
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
    head=insertAtLast(head,40);
    // head=insertAtLast(head,50);
  

    
    print(head);
  
    
insertInMiddle(head,30);
print(head);

   

  
    
    return 0;
}