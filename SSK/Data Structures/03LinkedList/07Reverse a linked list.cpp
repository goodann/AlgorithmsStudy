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
	Node* current = head->next;
	Node* before = head;
	if (current == nullptr)
		return before;
	before->next = nullptr;
	while (current != nullptr) {
		Node* next = current->next;
		current->next = before;
		before = current;
		current = next;
	}
	return before;
	// Complete this method
}
