/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    Node* newNode,*newHead;
    Node* cursorA = headA;
    Node* cursorB = headB;
    
    if( cursorA == NULL || cursorA->data > cursorB->data){
        newHead=cursorB;
        newNode=cursorB;
        cursorB=cursorB->next;
    }
    else if ( cursorB == NULL || cursorA->data < cursorB->data ){
        newHead=cursorA;
        newNode=cursorA;
        cursorA=cursorA->next;
    }
    
    while( cursorA != NULL && cursorB != NULL){
        if( cursorA->data < cursorB->data){
            newNode->next=cursorA;
            newNode=newNode->next;
            cursorA=cursorA->next;
        }
        else{
            newNode->next=cursorB;
            newNode=newNode->next;
            cursorB=cursorB->next;
        }
    }

    if( cursorA == NULL){
        while(cursorB != NULL){
            newNode->next=cursorB;
            newNode=newNode->next;
            cursorB=cursorB->next;
        }

    }
    else if( cursorB == NULL){
        while(cursorA != NULL){
            newNode->next=cursorA;
            newNode=newNode->next;
            cursorA=cursorA->next;
        }        
    }
    return newHead;
    
}
