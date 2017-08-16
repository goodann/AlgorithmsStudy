/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method. 
    
    Node* lastNode = head;
    Node* newNode;
    Node* cursor;
    
    if( head == NULL){
        return head;
    }
    
    while(lastNode->next != NULL){
        lastNode = lastNode->next;
    }
    
    cursor = lastNode;
    newNode = lastNode;
    
    while( cursor != NULL){
        if(cursor->next == NULL){
            cursor->next = cursor->prev;
            cursor->prev = NULL;
        }
        else{
            Node* tmp = cursor->next;
            cursor->next = cursor->prev;
            cursor->prev = tmp;    
        }        
        cursor = cursor->next;
    }
    return newNode;
}
