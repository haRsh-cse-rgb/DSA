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

int height(node *root){
    if(root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}


int main()
{
    node *root=new node(100);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(14);
    cout<<"Height of the tree is :"<< height(root);
    
   
    return 0;
}
