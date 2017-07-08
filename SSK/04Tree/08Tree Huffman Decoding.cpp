/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root,string s)
{
    node* current=root;
    //1001011
    //0123456
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            current=current->right;
            
        }else{
            current=current->left;
        }   
        if(current->left == nullptr && current->right == nullptr){
                cout<<current->data;
                current=root;
        }
    }
    cout<<endl;
}
