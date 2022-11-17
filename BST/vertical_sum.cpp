#include<iostream>
#include<map>
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

void vSumR(node * root , int hd , map<int , int> &mp){
    if(root==NULL){
        return;
    }
    vSumR(root->left, hd-1 , mp);
    mp[hd]+=root->data;
    vSumR(root->right , hd+1 , mp);
}

void vSum(node *root){

    map<int , int> mp;
    vSumR(root , 0 , mp);

    for(auto sum : mp ){
        cout<<sum.second<<" ";
    }

}

int main()
{
    node *root=new node(100);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(14);
    root->left->right=new node(100);

    vSum(root);
    
    
   
    return 0;
}