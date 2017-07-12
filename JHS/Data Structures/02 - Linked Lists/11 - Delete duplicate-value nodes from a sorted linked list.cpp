/*
Remove all duplicate elements from a sorted linked list
Node is defined as
struct Node
{
int data;
struct Node *next;
}
*/
Node* RemoveDuplicates(Node *head)
{
	// This is a "method-only" submission. 
	// You only need to complete this method. 
	Node *cursorA;
	Node *cursorB;

	cursorA = head;

	if (cursorA == NULL) {
		return head;
	}

	while (cursorA->next != NULL) {
		cursorB = cursorA;
		cursorA = cursorA->next;

		if (cursorB->data == cursorA->data) {
			cursorB->next = cursorA->next;
			cursorA = cursorB;
		}
	}

	return head;
}
