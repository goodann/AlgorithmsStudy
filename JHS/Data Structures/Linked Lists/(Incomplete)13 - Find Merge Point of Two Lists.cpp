/*
Find merge point of two linked lists
Node is defined as
struct Node
{
int data;
Node* next;
}
*/
int FindMergeNode(Node *headA, Node *headB)
{
	// Complete this function
	// Do not write the main method. 
	int countA;
	int countB;
	Node *cursorA;
	Node *cursorB;

	countA = 0;
	cursorA = headA;
	while (cursorA != NULL) {
		countA++;
		cursorA = cursorA->next;
	}

	countB = 0;
	cursorB = headB;
	while (cursorB != NULL) {
		countB++;
		cursorB = cursorB->next;
	}

	int count = 0;
	int result = 0;
	cursorA = headA;
	cursorB = headB;


	if (countA > countB) {
		int diff = countA - countB;
		for (int i = 0; i<diff; i++) {
			count++;
			cursorA = cursorA->next;
		}
	}
	else if (countA < countB) {
		int diff = countB - countA;
		for (int i = 0; i<diff; i++) {
			cursorB = cursorB->next;
		}
	}

	while (cursorA != NULL) {
		count++;
		if (cursorA->data != cursorB->data) {
			result = count;
		}
		cursorA = cursorA->next;
		cursorB = cursorB->next;
	}

	return result + 1;
}
