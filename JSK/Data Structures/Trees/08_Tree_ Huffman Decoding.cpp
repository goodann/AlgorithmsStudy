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
    node* current;
    for(int i = 0 ; i < s.size();){
        current = root;
        while( current->data == 0){
            if( s[i] == '1' ){
                current = current->right;
            }
            else{
                current = current->left;
            }
            i++;
        }
        cout<<current->data;
    }
}
