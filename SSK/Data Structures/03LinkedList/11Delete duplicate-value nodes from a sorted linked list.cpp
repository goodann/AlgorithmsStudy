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
	Node* current = head;
	Node* next = current->next;
	if (current == nullptr)
		return nullptr;
	while (next != nullptr) {

		while (current->next != nullptr && current->data == current->next->data) {
			next = current->next;
			current->next = next->next;
			delete next;
		}
		if (current->next == nullptr)
			return head;

		current = current->next;
		next = current->next;

	}
	return head;
	// This is a "method-only" submission. 
	// You only need to complete this method. 
}
