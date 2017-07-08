
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        int max=0;
        // Write your code here.
        stack(root,0,max);
        return max;
    }
    void stack(Node* root,int depth,int& max){
        if(root==nullptr)
            return;
        if(max<depth)
            max=depth;
        stack(root->left,depth+1,max);
        stack(root->right,depth+1,max);
    }
  