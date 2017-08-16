/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    
    if( head == NULL){
        return head;
    }
    Node* cursor=head;
    Node* current;
    int count;
        
    while (cursor->next != NULL){
        current=cursor->next;
        count=1;
        
        while( current != NULL){
            if (current == cursor){
                return true;
            }
            current=current->next;    
            count++;
            if( count > 100){   //over list size
                break;
            }
        }
        cursor=cursor->next;
    }
    
    return false;
}
