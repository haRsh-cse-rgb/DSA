#include<iostream>
#include<unordered_set>
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

bool pairSum(node *root , int k , unordered_set<int> &s){
    if(root==NULL){
        return false;
    }

    if(pairSum(root->left , k , s)==true){
        return true;
    }
    if(s.find(k-root->data)!= s.end()){
        return true;
    }
    else{
        s.insert(root->data);
    }
    return pairSum(root->right , k , s);
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

    unordered_set<int> s;


    if(pairSum(root , 75 , s )==true){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
 
    
    return 0;
}
