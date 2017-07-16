/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/

void inOrder(Node* root,bool& flag){
    if( root == NULL){
        return;
    }
        inOrder(root->left,flag);

    if( root->left == NULL && root-> right != NULL){
        if( root->data > root->right->data){
            flag=false;
        }
    }
    else if(root->left != NULL && root->right == NULL){
        if( root->data < root->left->data){
            flag=false;
        }
    }
    else if (root->left != NULL && root->right != NULL){
        if( root->data > root->right->data){
            flag=false;
        }
        if( root->data < root->left->data){
            flag=false;
        }
    }
    
    inOrder(root->right,flag);
}



   bool checkBST(Node* root) {
       bool flag=true;
       inOrder(root,flag);
       return flag;
   }
