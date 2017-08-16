
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/
#include <queue>
using namespace std;

void levelOrder(node * root) {
    queue<node*> Queue;
    node* nodeRight,*nodeLeft,*popNode;
    
    Queue.push(root);
    while( !Queue.empty() ){
        popNode=Queue.front();
        Queue.pop();
        cout<<popNode->data<<" ";
        
        if( popNode->left != NULL){
            Queue.push(popNode->left);
        }
        if( popNode->right != NULL){
            Queue.push(popNode->right);
        }    
    }
}
