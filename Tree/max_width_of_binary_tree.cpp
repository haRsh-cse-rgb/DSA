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

int maxWidth(node *root)
{
    queue<node *> q;
    int presize = 0;
    q.push(root);
    while (!q.empty())
    {
       int size = q.size();

        for (int i = 0; i < size; i++)
        {

            node *curr = q.front();
            q.pop();

            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
            q.push(curr->right);
            }
        }
        presize=max(presize,size);
    }

    return presize;
}

int main()
{
    node *root = new node(1);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(40);
    root->right->left = new node(40);
    root->right->right = new node(40);
   cout<< maxWidth(root);

    return 0;
}