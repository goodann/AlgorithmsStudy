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
void PrintList(Node *head) {
	Node* current = head;
	cout << "=list==============" << endl;
	while (current != nullptr) {
		cout << current->data << " -> ";
		current = current->next;
	}
	cout << endl;


}
Node* SortedInsert(Node *head, int data)
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = nullptr;
	newNode->prev = nullptr;
	if (head == nullptr) {
		head = newNode;
		return head;
	}
	Node* current = head;

	while (current != nullptr) {
		if (current->data>data) {
			if (current != head) {
				current->prev->next = newNode;
				newNode->prev = current->prev;
			}
			else
				head = newNode;
			newNode->next = current;
			current->prev = newNode;
			return head;
		}

		if (current->next == nullptr) {
			current->next = newNode;
			newNode->prev = current;
			return head;
		}
		current = current->next;
	}

	// Complete this function
	// Do not write the main method. 
	return head;
}
