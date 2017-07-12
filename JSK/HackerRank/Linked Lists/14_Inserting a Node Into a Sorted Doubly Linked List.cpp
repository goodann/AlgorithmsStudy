/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method. 
    Node* cursor = head;
    Node* newNode = new Node();
    
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    
    if( cursor == NULL){

        head=newNode;
        
        return head;
    }
    
    while( cursor != NULL){
        if (cursor-> data > data){
            if( cursor == head ){
                head = newNode;
            }
            else{
                newNode->prev = cursor->prev;
                cursor->prev->next = newNode;
            }
            newNode->next = cursor;
            cursor->prev = newNode;                
            return head;
        }
        
        if( cursor -> next == NULL){
            newNode->prev = cursor;
            cursor->next = newNode;
            return head;
        }
        cursor=cursor->next;
    }
    
    return head;
}
