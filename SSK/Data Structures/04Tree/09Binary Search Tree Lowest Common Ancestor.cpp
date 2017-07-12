/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * lca(node * root, int v1,int v2)
{
    if(v2<v1)
    {
        int temp=v1;
        v1=v2;
        v2=temp;
    }
    if(root==nullptr)
        return root;
    int data=root->data;
    node* result=root;
    node* temp;
    if(v2<data)
        temp=lca(root->left,v1,v2);
    else if(data<v1)
        temp=lca(root->right,v1,v2);
    
    if(temp!=nullptr)
        result=temp;
    //cout<<result->data<<" -- ";
    return result;   
}

