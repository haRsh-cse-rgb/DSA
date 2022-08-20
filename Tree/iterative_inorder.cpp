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

void inOrder(node *root){
    stack<node*> s;
    node *curr=root;
    while(curr!=NULL || s.empty()==false){
        while(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->data<<" ";
        curr=curr->right;


    }
}

int main()
{
    node *root=new node(1);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
inOrder(root);
   
    return 0;
}
