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

void printKdistance(node *root, int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
    }
    else{
        printKdistance(root->left,k-1);
        printKdistance(root->right,k-1);
    }
}
int main()
{
    node *root=new node(1);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
   printKdistance(root,2); 
   
    return 0;
}
