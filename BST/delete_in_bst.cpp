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
void inOrder(node *root){
    if(root!=NULL)  {
       
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
    }
}
void preOrder(node *root){
    if(root!=NULL)  {
       
    cout<<root->data<<" ";
    inOrder(root->left);
    inOrder(root->right);
    }
}
void postOrder(node *root){
    if(root!=NULL)  {
       
    inOrder(root->left);
    inOrder(root->right);
    cout<<root->data<<" ";
    }
}

node *getSuccessor(node *curr){
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL){
        curr=curr->left;
    }
        return curr;

}

node *deleteInBST(node *root, int x){
    if(root==NULL){
        return root;
    }
    if(root->data>x){
        root->left=deleteInBST(root->left,x);
    }
    else if(root->data<x){
        root->right=deleteInBST(root->right,x);
    }
    else{
        if(root->left==NULL){
            node *temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            node *temp=root->left;
            delete root;
            return temp;
        }
        else{
            node *succ=getSuccessor(root);
            root->data=succ->data;
            root->right=deleteInBST(root->right,succ->data);
        }

    }
return root;
  

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
    // root=insertInBST(root,2);
    // root=insertInBST(root,1);
    // root=insertInBST(root,4);
    // root=insertInBST(root,3);
    // root=insertInBST(root,6);
    root=insertInBST(root,30);
    insertInBST(root,50);
    insertInBST(root,15);
    insertInBST(root,20);
    insertInBST(root,10);
    insertInBST(root,40);
    insertInBST(root,60);

 inOrder(root);
 cout<<endl;
 root=deleteInBST(root,15);
 preOrder(root);
 cout<<endl;
 postOrder(root);
    
    return 0;
}
