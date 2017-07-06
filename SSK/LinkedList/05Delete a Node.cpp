/*
Delete Node at a given position in a linked list
Node is defined as
struct Node
{
int data;
struct Node *next;
}
*/
Node* Delete(Node *head, int position)
{
	Node* current = head;
	Node* before = head;
	for (int i = 0;i<position - 1;i++) {
		before = before->next;
	}
	current = before->next;
	if (position == 0) {
		current = head;
		head = head->next;
		delete current;
		return head;
	}
	else {
		before->next = current->next;
		delete current;
	}
	return head;
	// Complete this method
}
