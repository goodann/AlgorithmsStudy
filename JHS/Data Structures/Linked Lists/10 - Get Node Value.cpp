/*
Get Nth element from the end in a linked list of integers
Number of elements in the list will always be greater than N.
Node is defined as
struct Node
{
int data;
struct Node *next;
}
*/
int GetNode(Node *head, int positionFromTail)
{
	// This is a "method-only" submission. 
	// You only need to complete this method. 
	Node *cursor;
	cursor = head;

	int length = 0;

	while (cursor != NULL) {
		length++;
		cursor = cursor->next;
	}

	int findPosition = length - positionFromTail;

	cursor = head;
	for (int i = 1; i<findPosition; i++) {
		cursor = cursor->next;
	}

	return cursor->data;
}
