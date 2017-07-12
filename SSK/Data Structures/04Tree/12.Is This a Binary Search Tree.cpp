/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
void pushNodes(Node* root,vector<int>& vc){
    if(root==nullptr)
        return;
    pushNodes(root->left,vc);
    vc.push_back(root->data);
    pushNodes(root->right,vc);
}

bool checkBST(Node* root) {
    vector<int> vc;
    pushNodes(root,vc);
    int len=vc.size();
    
    for(int i=0;i<len-1;i++){
        if(vc[i]>=vc[i+1])
            return false;
    }
    return true;
}
