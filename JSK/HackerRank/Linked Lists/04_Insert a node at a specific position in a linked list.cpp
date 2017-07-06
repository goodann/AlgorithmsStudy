/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    int count=0;
    Node* cursor=head;
    Node* newNode = new Node();
    
    if(position == 0){  //insert head
        if( head == NULL){
            newNode->data=data;
            newNode->next =NULL;
            head=newNode;
        
             return head;
        }
        newNode->data= data;
        newNode->next = head;
        head=newNode;
    
        return head;
    }
    
    while ( count+1 != position){
        cursor=cursor->next;
        count++;
    }
    
    newNode->data = data;
    newNode->next = cursor->next;
    cursor->next=newNode;
    
    return head;
    
}
