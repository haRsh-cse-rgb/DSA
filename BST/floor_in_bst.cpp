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

node *floor(node *root, int x){
    node *res=NULL;
    while(root!=NULL){
        if(root->data==x){
          return root;
        }
        else if(root->data>x){
            root=root->left;
        }
        else{
            res=root;
            root=root->right;
        }

    }
    return res;
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

    root=insertInBST(root,30);
    insertInBST(root,50);
    insertInBST(root,15);
    insertInBST(root,20);
    insertInBST(root,10);
    insertInBST(root,40);
    insertInBST(root,60);

    node *res=floor(root,16);


    cout<<"Floor of 16 is " <<res->data;
 
    
    return 0;
}
