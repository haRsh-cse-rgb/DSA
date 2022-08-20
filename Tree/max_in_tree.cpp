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

int maxi(node *root){
    
  if(root==NULL){
    return INT_MIN;
  } 
  
  return max(root->data,max(maxi(root->left),maxi(root->right)));


}

int main()
{
    node *root=new node(1);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
   cout<<"The maximum in the tree is "<<maxi(root);
   
    return 0;
}
