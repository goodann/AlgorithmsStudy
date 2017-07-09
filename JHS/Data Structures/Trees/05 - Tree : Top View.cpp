/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void onlyLeft(node* root){
    if(root != NULL){
        onlyLeft(root->left);
        cout << root->data << " ";
    }
}
void onlyRight(node* root){
    if(root != NULL){
        cout << root->data << " ";
        onlyRight(root->right);
    }
}

void topView(node * root) {
    
    if(root->left != NULL){
        onlyLeft(root->left);
    }
    cout << root->data << " ";
    if(root->right != NULL){
        onlyRight(root->right);
    }
    
    //이게 왜 넘어가지
    //위에서 보이는거 출력하는건줄 알았더니
    //맨 윗줄만 출력하면 되나봄
    //아니면 알려주셈
}
