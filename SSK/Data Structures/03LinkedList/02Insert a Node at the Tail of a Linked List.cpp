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
	Node* current = head;
	if (current == nullptr) {
		head = new Node();
		head->data = data;
		head->next = nullptr;
		return head;
	}
	while (current->next != nullptr) {
		current = current->next;
		//cout<<current->data<<endl;
	}
	current->next = new Node();
	current->next->data = data;
	current->next->next = nullptr;
	return head;
	// Complete this method
}