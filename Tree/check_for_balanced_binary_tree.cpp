#include <iostream>
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

// int height(node *root){
//     if(root==NULL){
//         return 0;
//     }
//     return max(height(root->left),height(root->right))+1;
// }

// bool balanced(node *root){

// if(root==NULL){
//     return true;
// }

// int lh=height(root->left);
// int rh=height(root->right);

// return (abs(lh-rh)<=1 && balanced(root->left) &&balanced(root->right));

// }


int balanced(node* root)
{
    if (root == NULL)
        return 0;
    int lh = balanced(root->left);
    if (lh == -1)
        return -1;
    int rh = balanced(root->right);
    if (rh == -1)
        return -1;
 
    if (abs(lh - rh) > 1)
        return -1;
    else
        return max(lh, rh) + 1;
}

// int balanced(node * root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }

//     int lh = balanced(root->left);
//     if (lh == -1)
//     {
//         return -1;
//     }
//     int rh = balanced(root->right);
//     if (rh == -1)
//     {
//         return -1;
//     }

//     if (abs(lh - rh) > 1)
//     {
//         return -1;
//     }
//     else
//     {
//         return max(lh, rh) + 1;
//     }
    
// }

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->left->left=new node(8);
    // root->right->left=new node(15);
    // root->right->right=new node(19);

    if (balanced(root))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
