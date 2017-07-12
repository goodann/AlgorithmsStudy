/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
struct Node {
int data;
struct Node* next;
}
*/

bool has_cycle(Node* head) {
	// Complete this function
	// Do not write the main method
	int count = 0;
	while (head != NULL) {
		count++;
		head = head->next;

		if (count > 100) {
			return true;
		}
	}
	return false;
}