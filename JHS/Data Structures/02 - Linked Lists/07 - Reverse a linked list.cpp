/*
Reverse a linked list and return pointer to the head
The input list will have at least one element
Node is defined as
struct Node
{
int data;
struct Node *next;
}
*/
Node* Reverse(Node *head)
{
	// Complete this method
	Node *cursorA;
	Node *cursorB;

	cursorA = head;
	if (cursorA == NULL || cursorA->next == NULL) {
		return head;
	}

	while (cursorA->next != NULL) {
		cursorB = cursorA;
		cursorA = cursorA->next;
	}

	cursorB->next = NULL;
	cursorA->next = Reverse(head);
	head = cursorA;

	return head;
}