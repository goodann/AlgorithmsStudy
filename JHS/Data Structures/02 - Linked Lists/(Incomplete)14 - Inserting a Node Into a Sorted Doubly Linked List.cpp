/*
Insert Node in a doubly sorted linked list
After each insertion, the list should be sorted
Node is defined as
struct Node
{
int data;
Node *next;
Node *prev;
}
*/
Node* SortedInsert(Node *head, int data)
{
	if (head == NULL) {
		head = new Node();
		head->data = data;

		return head;
	}

	Node *cursor;
	cursor = head;
	while (cursor->next != NULL) {
		if (cursor->data > data) {
			Node *newNode = new Node();
			newNode->data = data;

			newNode->next = cursor;
			newNode->prev = cursor->prev;
			newNode->next->prev = newNode;
			newNode->prev->next = newNode;

			return head;
		}
		cursor = cursor->next;
	}

	Node *newNode = new Node();
	newNode->data = data;

	newNode->prev = cursor;
	newNode->prev->next = newNode;

	return head;
	// Complete this function
	// Do not write the main method. 
}