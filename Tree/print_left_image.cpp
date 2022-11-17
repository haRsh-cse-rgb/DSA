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

void leftImageOfTree(node *root)
{

    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {

        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            node *curr = q.front();
            q.pop();

            if (i == 0)
            {
                cout << curr->data << endl;
            }
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }
}

int main()
{
    node *root = new node(1);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);

    leftImageOfTree(root);

    return 0;
}