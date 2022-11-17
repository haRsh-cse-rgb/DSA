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

void levelOrderTraversal(node *root)
{

    if (root == NULL)
    {
        return;
    }

    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *curr = q.front();
        q.pop();
        cout << curr->data << " ";
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

void lineByline(node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (q.size()>1)
    {
        node *curr = q.front();
        q.pop();

        if (curr == NULL)
        {
            q.push(NULL);
            cout << endl;
            continue;
        }
        cout << curr->data << " ";
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

int main()
{
    node *root = new node(1);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    levelOrderTraversal(root);
    cout<<endl;
    lineByline(root);

    return 0;
}