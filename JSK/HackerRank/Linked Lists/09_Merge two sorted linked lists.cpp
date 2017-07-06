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
    Node* mergeNodeHead;
    Node* mergeNode = new Node();
    mergeNodeHead = mergeNode;
    Node* cursorMerge=mergeNodeHead;
    
    Node* cursorA = headA;
    Node* cursorB = headB;
    
    while ( cursorA != NULL && cursorB != NULL){
        if( cursorA->data < cursorB->data){
            Node* newNode = new Node();
            newNode->data= cursorA->data;
            cursorMerge->next = newNode;
            cursorMerge=newNode;
            cursorA=cursorA->next;
            
        }
        else{
            Node* newNode = new Node();
            newNode->data= cursorB->data;
            cursorMerge->next = newNode;
            cursorMerge=newNode;
            cursorB=cursorB->next;
        }
    }
    
    if( cursorA == NULL){
        while( cursorB!=NULL){
            Node* newNode = new Node();
            newNode->data= cursorB->data;
            cursorMerge->next = newNode;
            cursorMerge=newNode;
            cursorB=cursorB->next;
        }
    }
    else if ( cursorB == NULL){
        while(cursorA !=NULL){
            Node* newNode = new Node();
            newNode->data= cursorA->data;
            cursorMerge->next = newNode;
            cursorMerge=newNode;
            cursorA=cursorA->next;
        }
    }
    mergeNodeHead=mergeNodeHead->next;  //remove head
    
    return mergeNodeHead;
}
