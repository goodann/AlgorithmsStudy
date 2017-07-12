/*
Insert Node at the end of a linked list
head pointer input could be NULL as well for empty list
Node is defined as
struct Node
{
int data;
struct Node *next;
}
*/
Node* Insert(Node *head, int data)
{
	// Complete this method
	Node *cursor;
	cursor = head;

	if (head == NULL) {
		cursor = new Node();

		cursor->data = data;
		cursor->next = NULL;

		return cursor;
	}
	else {
		while (cursor->next != NULL) {
			cursor = cursor->next;
		}
		cursor->next = new Node();
		cursor = cursor->next;

		cursor->data = data;
		cursor->next = NULL;

		return head;
	}
}