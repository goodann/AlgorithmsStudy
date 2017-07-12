/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/
node* insertNode(node* current,int value){
    if(current==nullptr)
        return nullptr;
     if(value<current->data){
        if(insertNode(current->left,value)==nullptr){
            node* newNode=new node;
            newNode->data=value;
            newNode->left=nullptr;
            newNode->right=nullptr;
            current->left=newNode;
            return newNode;
        }
        
    }else if(value>current->data){
        if(insertNode(current->right,value)==nullptr){
            node* newNode=new node;
            newNode->data=value;
            newNode->left=nullptr;
            newNode->right=nullptr;
            current->right=newNode;
            return newNode;
        }
        
    }
    return current;
}

node * insert(node * root, int value) {
    if(root==nullptr){
        node* newNode=new node;
        newNode->data=value;
        newNode->left=nullptr;
        newNode->right=nullptr;
        return newNode;
    }
     insertNode(root,value);   
   

   return root;
}
