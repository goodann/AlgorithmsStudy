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
	Node *head;

	if (headA == NULL && headB == NULL) {
		return NULL;
	}
	else if (headA != NULL && headB == NULL) {
		head = headA;
		headA = headA->next;
	}
	else if (headA == NULL && headB != NULL) {
		head = headB;
		headB = headB->next;
	}
	else {
		if (headA->data <= headB->data) {
			head = headA;
			headA = headA->next;
		}
		else {
			head = headB;
			headB = headB->next;
		}
	}
	head->next = MergeLists(headA, headB);

	// This is a "method-only" submission. 
	// You only need to complete this method 
	return head;
}