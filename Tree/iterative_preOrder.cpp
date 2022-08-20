#include<iostream>
#include<stack>
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

void preOrder(node *root){
    if(root==NULL){
        return;
    }
    stack<node *> s;
    s.push(root);
    while(s.empty()==false){
        node *curr=s.top();
        cout<<curr->data<<" ";
        s.pop();
        if(curr->right!=NULL){
            s.push(curr->right);
        }
        if(curr->left!=NULL){
            s.push(curr->left);
        }

    }
}

int main()
{
    node *root=new node(1);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
preOrder(root);
   
    return 0;
}
