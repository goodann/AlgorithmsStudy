/*
Node is defined as

typedef struct node
{
int data;
node * left;
node * right;
}node;

*/


node * insert(node * root, int value) {
	node* cursor;
	node* cursor_p;
	cursor = root;

	if (root == nullptr) {
		root = new node();
		root->data = value;

		return root;
	}

	while (cursor != NULL) {
		if (cursor->data > value) {
			cursor_p = cursor;
			cursor = cursor->left;
		}
		else {
			cursor_p = cursor;
			cursor = cursor->right;
		}
	}

	if (cursor_p->data > value) {
		cursor_p->left = new node();
		cursor_p->left->data = value;
	}
	else {
		cursor_p->right = new node();
		cursor_p->right->data = value;
	}

	return root;
}
