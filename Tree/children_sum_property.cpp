#include <iostream>
#include <queue>
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

bool childrenSumProperty(node *root)
{

    if (root == NULL)
    {
        return true;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }

    int sum = 0;
    if (root->left != NULL)
    {
        sum += root->left->data;
    }
    if (root->right != NULL)
    {
        sum += root->right->data;
    }

    return (root->data == sum && childrenSumProperty(root->left) && childrenSumProperty(root->right));
}

int main()
{
    node *root = new node(20);
    root->left = new node(10);
    root->right = new node(10);
    root->left->left = new node(10);

   if( childrenSumProperty(root)){
    cout<<"Yes"<<endl;
   }
   else{
    cout<<"No"<<endl;
   }

    return 0;
}