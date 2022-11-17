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

void spiralTraversal(node *root)
{
    if(root==NULL){
        return;
    }

    queue<node *> q;
    stack<int> s;

    q.push(root);
    bool reverse = false;

    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            node *curr = q.front();
            q.pop();

            if (reverse)
            {
                s.push(curr->data);
            }else{
            cout << curr->data;
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

        if (reverse)
        {
            while (s.empty() == false)
            {
                cout << s.top() << " ";
                s.pop();
            }
        }
        reverse = !reverse;
        cout << endl;
    }
}

int main()
{
    node *root = new node(1);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);

    spiralTraversal(root);

    return 0;
}