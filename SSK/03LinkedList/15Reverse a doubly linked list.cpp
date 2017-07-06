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
	Node* forward = head;
	Node* backward = head;
	Node* newHead = nullptr;
	int size = 0;
	if (backward == nullptr)
		return nullptr;
	forward = head;
	while (forward != nullptr) {
		forward = forward->next;
	}
	while (backward->next != nullptr) {
		backward = backward->next;
		size++;
	}
	newHead = backward;
	backward = newHead->prev;
	newHead->prev = nullptr;
	newHead->next = nullptr;
	forward = newHead;
	while (backward != nullptr) {
		forward->next = backward;
		backward = backward->prev;
		forward->next->prev = forward;
		forward = forward->next;
		forward->next = nullptr;
	}

	return newHead;
	// Complete this function
	// Do not write the main method. 
}
