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
	Node *currentA = headA;
	Node *currentB = headB;

	while (currentA != nullptr) {
		currentB = headB;
		while (currentB != nullptr) {
			if (currentA->next == currentB->next)
				return currentA->next->data;
			currentB = currentB->next;
		}
		currentA = currentA->next;
	}
	// Complete this function
	// Do not write the main method. 
	return 0;
}
