/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/

    void inOrder(Node* root,vector<int>& stack){
        
        if( root == NULL){
            return;
        }
        
        inOrder(root->left,stack);
        stack.push_back(root->data);
        inOrder(root->right,stack);
    }


   bool checkBST(Node* root) {
       
       vector<int> stack;
       
       inOrder(root,stack);
       
       for(int i = 0 ; i < stack.size()-1; i++){
           if( stack[i] >= stack[i+1])
               return false;
       }
      
    return true;
   }
