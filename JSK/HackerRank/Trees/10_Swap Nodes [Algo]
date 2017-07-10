#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef struct node{
    int data;
    node* left;
    node* right;
    
} node;

void inOrder(node* root){
    
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int getDepthUtil(node* root, int data, int depth)
{
    if (root == NULL)
        return 0;
 
    if (root->data == data)
        return depth;
 
    int downDepth = getDepthUtil(root->left, data, depth+1);
    if (downDepth != 0)
        return downDepth;
 
    downDepth = getDepthUtil(root->right, data, depth+1);
    return downDepth;
}
 
int getDepth(node* root, int data)
{
    return getDepthUtil(root,data,1);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    node* current;
    vector<node*> nodes;
    int N,T,K,depth;
    cin>>N;
    
    
    node* root = new node();
    root->data = 1;
    root->left = NULL;
    root->right = NULL;
    
    nodes.push_back(root);
    
    for(int i = 0 ; i < N ; i++){
        int a,b;
        node* leftNode;
        node* rightNode;
        cin >> a >>b;
       
        if( a != -1){
            leftNode = new node();
            leftNode->data = a;
            leftNode->left = NULL;
            leftNode->right = NULL;
            nodes[i]->left = leftNode;
            nodes.push_back(leftNode);
        }
        else{
            leftNode = NULL;
            nodes[i]->left = leftNode;
        }
        
        if( b != -1){
            rightNode = new node();
            rightNode->data = b;
            rightNode->left = NULL;
            rightNode->right = NULL;
            nodes[i]->right = rightNode;
            nodes.push_back(rightNode);
        }
        else{
            rightNode = NULL;
            nodes[i]->right = rightNode;
        }
        
    }

    cin >> T;
    for(int i = 0 ; i < T; i ++){
        cin >> K;
        for(int i = 0 ; i < nodes.size() ; i++){
            depth=getDepth(root,nodes[i]->data);
            for(int j = 1 ; j < 550 ; j++){
                if( nodes.size() < j ){
                    break;
                }
                if( depth == j*K )  {        
                    node* tmp=nodes[i]->right;
                    nodes[i]->right=nodes[i]->left;
                    nodes[i]->left=tmp;      
                }    
            }
            
            
        }
        inOrder(root);
        cout<<endl;
    }

    return 0;
}
