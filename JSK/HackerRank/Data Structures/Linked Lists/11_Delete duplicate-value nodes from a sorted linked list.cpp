/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
#include <set>
using namespace std;

Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    if( head == NULL || head-> next ==NULL){
        return head;
    }
    Node* cursor = head->next;
    Node* beforeCursor=head;
       
    while(cursor != NULL){
        if( beforeCursor->data == cursor->data){   // no duplicated data
            cursor=cursor->next;
            beforeCursor->next=cursor;
        }
        else{
            beforeCursor=cursor;
            cursor=cursor->next;
        }
        
    }
    return head;
}
