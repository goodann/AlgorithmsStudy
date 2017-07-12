/*
Insert Node at a given position in a linked list
head can be NULL
First element in the linked list is at position 0
Node is defined as
struct Node
{
int data;
struct Node *next;
}
*/
Node* InsertNth(Node *head, int data, int position)
{
	Node* current = head;
	Node* newNode = new Node();
	newNode->data = data;
	if (position == 0) {
		newNode->next = head;
		return newNode;
	}

	for (int i = 0;i<position - 1;i++) {
		current = current->next;
	}
	newNode->next = current->next;
	current->next = newNode;
	return head;


	// Complete this method only
	// Do not write main function. 
}
