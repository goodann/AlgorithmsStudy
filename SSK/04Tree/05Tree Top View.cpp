/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void topView(node * root) {
    stack<node*> st;
    node* current=root;
    while(current!=nullptr){
        st.push(current);
        current=current->left;
    }
    while(!st.empty()){
        
        cout<<st.top()->data<<" ";
        st.pop();
    }
    current=root->right;
    while(current!=nullptr){
        cout<<current->data<<" ";
        current=current->right;
    }
        
  
}
