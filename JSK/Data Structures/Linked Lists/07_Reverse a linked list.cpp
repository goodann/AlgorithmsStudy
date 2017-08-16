/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
#include <vector>
using namespace std;

Node* Reverse(Node *head)
{
  // Complete this method
    Node* cursor = head;
    vector<int> tmp;
        
    
    if( head == NULL){
        return NULL;
    }
    while( cursor != NULL){
        tmp.push_back(cursor->data);
        cursor=cursor->next;
    }
    
    cursor=head;
    
    for(int i = tmp.size()-1 ; i>=0  ; i --){
        cursor->data = tmp[i];
        cursor=cursor->next;
    }
    return head;    
}
