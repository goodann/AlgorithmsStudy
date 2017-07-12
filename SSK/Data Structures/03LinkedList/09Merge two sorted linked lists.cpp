/*
Merge two sorted lists A and B as one linked list
Node is defined as
struct Node
{
int data;
struct Node *next;
}
*/
Node* MergeLists(Node *headA, Node* headB)
{
	Node* currentA = headA;
	Node* currentB = headB;
	Node* current = nullptr;
	Node* newHead = nullptr;
	if (currentA != nullptr && (currentB == nullptr || currentA->data < currentB->data)) {
		newHead = currentA;
		current = currentA;
		currentA = currentA->next;

	}
	else {
		newHead = currentB;
		current = currentB;
		currentB = currentB->next;
	}


	while (currentA != nullptr || currentB != nullptr) {

		if (currentA != nullptr && (currentB == nullptr || currentA->data < currentB->data)) {
			current->next = currentA;
			current = currentA;
			currentA = currentA->next;

		}
		else {
			current->next = currentB;
			current = currentB;
			currentB = currentB->next;
		}
	}
	current->next = nullptr;
	return newHead;
	// This is a "method-only" submission. 
	// You only need to complete this method 
}
