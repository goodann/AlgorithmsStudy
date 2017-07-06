/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
#include <vector>
using namespace std;

void ReversePrint(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node* cursor = head;
    vector<int> tmp;
        
    
    if( head == NULL){
        return;
    }
    while( cursor != NULL){
        tmp.push_back(cursor->data);
        cursor=cursor->next;
    }
    for(int i = tmp.size()-1 ; i>=0  ; i --){
        cout<<tmp[i]<<endl;
    }
    
}
