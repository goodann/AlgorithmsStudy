/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
void printLeft(node* root){
    if( root == NULL){
        return;
    }
    printLeft(root->left);
    cout<<root->data<<" ";
}


void topView(node * root) {
 
    printLeft(root);
    root=root->right;
    while( root != NULL){
        cout<<root->data<<" ";
        root=root->right;
    }
  
}



