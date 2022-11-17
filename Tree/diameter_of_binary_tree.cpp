#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct node
{

    int data;
    node *left;
    node *right;

    node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

int height(node *root){
    if(root==NULL){
        return 0;
    }
    return 1+max(height(root->left), height(root->right));
}

int diameter(node *root){
    if(root==NULL){
        return 0;
    }

    int d1=1+height(root->left)+height(root->right);

    int d2=diameter(root->left);
    int d3=diameter(root->right);

    return max(d1, max(d2,d3));
}


// int diameter(node *root){
//     static int res=0;
//     if(root==NULL){
//         return 0;
//     }
//     int lh=diameter(root->left);
//     int rh=diameter(root->right);

//     res=max(res, lh+rh+1);
//     return 1+max(lh,rh);


// }
int main()
{
    node *root = new node(1);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);

   cout<<diameter(root);

    return 0;
}