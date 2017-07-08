
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node * root) {
    queue<node*> que;
    node* current=root;
    while(current!=nullptr){
        cout<<current->data<<" ";
        if(current->left!=nullptr)
            que.push(current->left);
        if(current->right!=nullptr)
            que.push(current->right);
        if(!que.empty()){
            current=que.front();
            que.pop();
        }else
            break;
    }
        
  
}
