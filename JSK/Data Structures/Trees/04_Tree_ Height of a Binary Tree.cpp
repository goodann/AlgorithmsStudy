
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int depth=0;

    void inOrder(Node* root,int count){
        
        int countLeft,countRight;
        
        if (root == NULL){
            return;
        }
        if( count > depth){
            depth=count;
        }
        count++;
        inOrder(root->left,count);
        inOrder(root->right,count);
    }


    int height(Node* root) {
        // Write your code here.
        inOrder(root,0);
        return depth;
        
    }
  
