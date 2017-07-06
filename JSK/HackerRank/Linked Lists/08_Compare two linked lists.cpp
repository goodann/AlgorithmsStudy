/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    Node* cursorA = headA;
    Node* cursorB = headB;
    if( cursorA == NULL || cursorB == NULL){
        return 0;
    }
    
    while (cursorA -> data == cursorB -> data ){

       cursorA=cursorA->next;
       cursorB=cursorB->next;
        
       if( cursorA == NULL && cursorB ==NULL){
           return 1;
       }
        
       if( cursorA == NULL || cursorB == NULL){
            return 0;
        }
    }
    return 0;
}
