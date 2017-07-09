
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int heightCheck(Node* root, int depth){
        int currentDepth = depth;
        
        if(root != NULL){
            currentDepth++;
            int leftDepth = heightCheck(root->left, currentDepth);
            int rightDepth = heightCheck(root->right, currentDepth);
            if(leftDepth > currentDepth){
                currentDepth = leftDepth;
            }
            if(rightDepth > currentDepth){
                currentDepth = rightDepth;
            }
        }
        
        return currentDepth;
    }

    int height(Node* root) {
        // Write your code here.
        int max_depth = 0;
        
        if(root != NULL){
            int leftDepth = heightCheck(root->left, max_depth);
            int rightDepth = heightCheck(root->right, max_depth);
            if(leftDepth > max_depth){
                max_depth = leftDepth;
            }
            if(rightDepth > max_depth){
                max_depth = rightDepth;
            }
        }
        
        return max_depth;
    }
  
