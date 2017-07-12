/*
struct node
{
int data;
node* left;
node* right;
}*/


int height(node* root) {        //depth 备窍绰 内靛客 悼老
								// Write your code here.
	int max_depth;

	if (root != NULL) {
		max_depth = 0;

		int left_depth = height(root->left) + 1;
		int right_depth = height(root->right) + 1;

		if (left_depth > right_depth) {
			max_depth = left_depth;
		}
		else {
			max_depth = right_depth;
		}
	}
	else {
		max_depth = -1;
	}

	return max_depth;

}

void levelPrint(node* root, int level) {
	if (root == NULL) {

	}
	else if (level == 0) {
		cout << root->data << " ";
	}
	else {
		levelPrint(root->left, level - 1);
		levelPrint(root->right, level - 1);
	}
}

void levelOrder(node * root) {
	int max_level = 0;

	max_level = height(root);

	for (int i = 0; i <= max_level; i++) {  //?
		levelPrint(root, i);
	}

}