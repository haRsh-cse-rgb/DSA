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
    preOrder(root->left);
    preOrder(root->right);
    }
}
void postOrder(node *root){
    if(root!=NULL)  {
       
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
    }
}

int main()
{
    node *root=new node(1);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    cout<<"InOrder"<<endl;
    inOrder(root);
    cout<<endl;
    cout<<"PreOreder"<<endl;
    preOrder(root);
    cout<<endl;
    cout<<"PostOreder"<<endl;
    postOrder(root);
    return 0;
}
