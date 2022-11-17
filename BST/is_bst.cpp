#include<iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};

bool isbst(node *root , int min, int max){
    if(root==NULL){
        return true;
    }
    return(root->data>min &&
          root->data<max&&
          isbst(root->left , min , root->data)&&
          isbst(root->right , root->data , max)
    );

}

node *insertInBST(node *root , int x){
    node *temp=new node (x);
    node *parent=NULL;
    node *curr=root;
    while(curr!=NULL){
        parent=curr;
        if(root->data>x){
            curr=curr->left;
        }
        else if(root->data<x){
        curr=curr->right;
        }
        else{
            return root;
        }
    }
    if(parent==NULL){
        return temp;
    }
    if(parent->data>x){
        parent->left=temp;

    }
    else{
        parent->right=temp;
    }
return root;
}

int main()
{
    



    node *root=NULL;

    root=insertInBST(root,1);
    insertInBST(root,50);
    insertInBST(root,15);
    insertInBST(root,20);
    insertInBST(root,10);
    insertInBST(root,40);
    insertInBST(root,60);

    


   if(isbst(root , INT_MIN , INT_MAX)){
    cout<<"Yes it is bst"<<endl;
   }
   else{
    cout<<"No it is not a bst"<<endl;
   }
 
    
    return 0;
}
