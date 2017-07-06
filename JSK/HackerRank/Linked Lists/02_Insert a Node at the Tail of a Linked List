/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node* cursor = head;
    Node* newNode = new Node();

    if( cursor == NULL){
        newNode->data=data;
        newNode->next = NULL;

        head = newNode; //
        return head;
    }
    
    while ( cursor->next != NULL){
        cursor= cursor->next;
    }
    
    newNode->data=data;
    newNode->next=NULL;
    cursor->next=newNode;

    return head;    
}
