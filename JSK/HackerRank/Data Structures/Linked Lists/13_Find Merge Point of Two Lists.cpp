/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    
    int count=0;
    Node* cursorA = headA;
    Node* cursorB = headB;
    
    while(cursorA != NULL){
        while( cursorB!= NULL){
            if(cursorA == cursorB){
                return cursorA->data;
            }
            cursorB = cursorB -> next;
        }
        cursorB = headB;
        cursorA = cursorA -> next;
    }
    return 0;
}
