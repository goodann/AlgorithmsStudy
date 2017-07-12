/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
struct Node {
int data;
struct Node* next;
}
*/
bool has_cycle(Node* head) {
	if (head == nullptr) {
		return 0;
	}
	Node* current = head->next;
	Node* cycle = head;
	int count = 0;
	int limit = 2;
	while (current != nullptr) {
		if (current == cycle) {
			return 1;
		}
		if (count>limit) {
			cycle = cycle->next;
			count = 0;
			limit *= 2;
		}
		count++;
		current = current->next;
	}
	return 0;
	// Complete this function
	// Do not write the main method
}
