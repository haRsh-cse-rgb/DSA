#include<iostream>
#include<stack>
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

node * construct(int in[] , int pre[] , int is , int size){

    if(is>size){
        return NULL;
    }
    static int preIndex=0;

    node *root=new node(pre[preIndex++]);

int inIndex;
    for(int i=is ; i<=size ; i++){
        if(in[i]==root->data){
            inIndex=i;
            break;
        }
    }

    root->left=construct(in , pre , is , inIndex-1);
    root->right=construct(in , pre , inIndex+1 , size);


    return root;

}


void preOrder(node *root){
    if(root!=NULL)  {
       
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
    }
}

int sizee(node *root){
  if(root==NULL){
    return 0;
  } 
  return 1+sizee(root->left)+sizee(root->right);
}

int main()
{
   int in[] ={20 , 10 , 40 , 30 , 50};
   int pre[]={10 , 20 , 30 , 40 , 50};


int size=sizeof(pre)/sizeof(pre[0]);
node *root=construct(in , pre , 0 , size-1);
cout<<sizee(root)<<endl;


cout<<root->data<<endl;

preOrder(root);
   
    return 0;
}
