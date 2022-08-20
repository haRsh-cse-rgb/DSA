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

// void nfromlast(node *head , int n){
//      node *curr=head;
//      int temp=0;

//      while(curr->next!=NULL){
//          curr=curr->next;
//          temp++;
//      }
//      if(n>temp){
//          return;
//      }
    
    
//      curr=head;
//      for(int i=1; i<=temp-n+1; i++ ){
//         curr=curr->next;
//      }
     
//     cout<< curr->data;
     

// }


//++++++++++++++++++++++++++  Solution in O(n)time  +++++++++++++++++++++++++

void nfromlast(node *head, int x){
     node *first=head;
     node *second=head;
     if(head==NULL){
         return;
     }

     for(int i=0 ;i<x; i++){
         if(first==NULL){
             return;
         }
         first=first->next;
     }

     while(first!=NULL){
         second=second->next;
         first=first->next;
     }

     cout<<second->data;
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
    
    // head=insertAtLast(head,40);
    // head=insertAtLast(head,50);

    
    print(head);

//   int middle=findMiddle(head);
   
nfromlast(head, 3);
  
    
    return 0;
}
