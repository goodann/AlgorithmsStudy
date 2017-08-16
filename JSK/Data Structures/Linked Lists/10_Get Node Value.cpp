/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node* cursor=head;
    int num=0,count=1;
    
    while( cursor != NULL){
        cursor=cursor->next;
        num++;
    }
    
    cursor=head;
    while( num-count !=positionFromTail ){
        cursor=cursor->next;
        count++;
    }
    return cursor->data;
}
