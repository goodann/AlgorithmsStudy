/*
Print elements of a linked list on console
head pointer input could be NULL as well for empty list
Node is defined as
struct Node
{
int data;
struct Node *next;
}
*/
void Print(Node *head)
{
	Node* current = head;
	while (current != nullptr) {
		cout << current->data << endl;
		current = current->next;

	}

	// This is a "method-only" submission. 
	// You only need to complete this method. 
}
