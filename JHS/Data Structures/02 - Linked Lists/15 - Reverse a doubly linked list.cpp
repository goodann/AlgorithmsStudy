/*
Reverse a doubly linked list, input list may also be empty
Node is defined as
struct Node
{
int data;
Node *next;
Node *prev;
}
*/
Node* Reverse(Node* head)
{
	// Complete this function
	// Do not write the main method. 
	Node *cursorA;
	Node *cursorB;

	if (head == NULL || head->next == NULL) {
		return head;
	}

	cursorA = head;
	do {
		cursorB = cursorA;
		cursorA = cursorA->next;

		cursorB->prev = cursorA;
	} while (cursorA->next != NULL);
	cursorA->prev = NULL;

	cursorA = head;
	cursorA->next = NULL;
	do {
		cursorB = cursorA;
		cursorA = cursorA->prev;

		cursorA->next = cursorB;
	} while (cursorA->prev != NULL);

	head = cursorA;

	return head;
}