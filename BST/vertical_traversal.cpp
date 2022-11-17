#include<iostream>
#include<map>
#include<queue>

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

void verticalTraversal(node *root){
map<int , vector<int>> mp;
queue<pair<node * , int>> q;

q.push({root,0});

while(q.empty()==false){
    auto temp=q.front();
    node *curr=temp.first;
    int hd=temp.second;

    mp[hd].push_back(curr->data);
    q.pop();
    if(curr->left!=NULL){
        q.push({curr->left,hd-1});
    }
    if(curr->right!=NULL){
        q.push({curr->right, hd+1});
    }

}

for(auto p :mp){
    vector<int> v=p.second;

    for(int x : v){
        cout<<p.first<<":: "<<x<<" ";
    }
    cout<<endl;
}


}

int main()
{
    node *root=new node(100);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(14);
    root->left->right=new node(100);

    verticalTraversal(root);

    
    
    
   
    return 0;
}