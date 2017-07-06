/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    int count=0;
    Node* removeNode;
    Node* cursor = head;
    
    //remove head
    if(position == 0 ){ 
        removeNode = head;
        head = cursor->next;
        
        delete removeNode;
        
        return head;
    }  
    
    while(count+1 != position){
        cursor=cursor->next;
        count++;
    }
    
    removeNode=cursor->next;
    cursor->next=removeNode->next;
    
    delete removeNode;
    
    return head;
}
