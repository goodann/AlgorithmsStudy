/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value) {
    
    node* current = root;
    node* insertedNode = new node();
    insertedNode->data=value;
    insertedNode->left=NULL;
    insertedNode->right=NULL;
    
    if( current == NULL){
        current=insertedNode;
        return current;
    }
    
    while(1){
        if( current->data >= value){
            if( current->left == NULL){
                current->left=insertedNode;
                break;
            }
            current = current->left;
        }
        else{
            if( current->right == NULL){
                current->right=insertedNode;
                break;
            }
            current = current->right;
        }
    }

   return root;
}
