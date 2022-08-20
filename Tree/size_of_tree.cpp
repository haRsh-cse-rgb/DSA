#include<iostream>
using namespace std;

struct node{

    int data;
    node *left;
    node *right;

    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }

};

int size(node *root){
  if(root==NULL){
    return 0;
  } 
  return 1+size(root->left)+size(root->right);
}

int main()
{
    node *root=new node(1);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
   cout<<"The size of the tree is "<<size(root);
   
    return 0;
}
