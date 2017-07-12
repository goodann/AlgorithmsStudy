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
	Node* current = head;
	int size = 0;
	while (current != nullptr) {
		current = current->next;

		size++;
	}
	current = head;
	for (int i = 0;i<(size - positionFromTail - 1);i++) {
		current = current->next;
	}
	if (current == nullptr)
		return 0;

	return current->data;
	// This is a "method-only" submission. 
	// You only need to complete this method. 
}
