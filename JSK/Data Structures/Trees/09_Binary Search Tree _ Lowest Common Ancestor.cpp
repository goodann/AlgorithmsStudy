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
    node* leftNode;
    node* rightNode;
    
    if(root == NULL){
        return NULL;
    }
    
    if( root->data == v1 || root->data == v2){
        return root;
    }
    
   
    leftNode = lca(root->left,v1,v2);
    rightNode = lca(root->right,v1,v2);
    
    if( leftNode != NULL && rightNode != NULL){
        return root;
    }
    else{
        return (leftNode) ? leftNode : rightNode;
    }
    
   
    return NULL;
}

