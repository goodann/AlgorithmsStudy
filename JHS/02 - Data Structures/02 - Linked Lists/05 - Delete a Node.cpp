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
	// Complete this method
	int curPosition = 0;
	Node *cursor;

	if (position == 0) {
		head = head->next;
	}
	else {
		cursor = head;
		while (curPosition < position - 1) {
			curPosition++;
			cursor = cursor->next;
		}
		cursor->next = cursor->next->next;
	}

	return head;
}
