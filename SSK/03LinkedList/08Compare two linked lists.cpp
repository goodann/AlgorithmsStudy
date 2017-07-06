/*
Compare two linked lists A and B
Return 1 if they are identical and 0 if they are not.
Node is defined as
struct Node
{
int data;
struct Node *next;
}
*/
int CompareLists(Node *headA, Node* headB)
{
	Node* currentA = headA;
	Node* currentB = headB;
	while (currentA != nullptr && currentB != nullptr) {
		if (currentA->data != currentB->data) {
			return 0;
		}
		currentA = currentA->next;
		currentB = currentB->next;
	}
	if (currentA != nullptr || currentB != nullptr) {
		return 0;
	}
	return 1;
	// This is a "method-only" submission. 
	// You only need to complete this method 
}
