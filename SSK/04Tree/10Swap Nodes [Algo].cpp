#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* insertNode(int data){
    node* newNode= new node();
    newNode->data=data;
    newNode->left=nullptr;
    newNode->right=nullptr;
    return newNode;
}
void printInorder(node* root){
    if(root==nullptr)
        return;
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
void getDepthNodes(queue<node*>&que,node* root,int depth,int k){
    if(root==nullptr)
        return;
    if(k!=0 &&(depth%k)==k-1)
        que.push(root);
    getDepthNodes(que,root->left,depth+1,k);
    getDepthNodes(que,root->right,depth+1,k);
}

void swapping(node* root,int k){
    queue<node*>que;
    getDepthNodes(que,root,0,k);
    while(!que.empty()){
        node* now = que.front();
        node* temp;
        temp=now->left;
        now->left=now->right;
        now->right=temp;
        que.pop();
    }
}


int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    node* root;
    root=insertNode(1);
    node* current=root;
    queue<node*> que;
    que.push(root);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a;
        cin>>b;
        current = que.front();
        if(a!=-1){
            node* newNode=insertNode(a);
            current->left=newNode;
            que.push(newNode);
        }
        if(b!=-1){
            node* newNode=insertNode(b);
            current->right=newNode;
            que.push(newNode);
        }
        current=que.front();
        que.pop();
    }
    //printInorder(root);
    //cout<<endl;
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int k;
        cin>>k;
        swapping(root,k);
        printInorder(root);
        cout<<endl;
    }
    
    return 0;
}
