/*
Print elements of a linked list in reverse order as standard output
head pointer could be NULL as well for empty list
Node is defined as
struct Node
{
int data;
struct Node *next;
}
*/
void ReversePrint(Node *head)
{
	Node* current = head;
	if (current == nullptr) {
		return;
	}
	while (current->next != nullptr) {
		current = current->next;
	}
	while (current != head) {
		cout << current->data << endl;
		Node* before = head;
		while (before->next != current) {
			before = before->next;
		}
		current = before;
	}
	cout << current->data << endl;

	// This is a "method-only" submission. 
	// You only need to complete this method. 
}
