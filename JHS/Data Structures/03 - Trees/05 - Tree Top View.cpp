/*
struct node
{
int data;
node* left;
node* right;
};
*/

void onlyLeft(node* root) {
	if (root != NULL) {
		onlyLeft(root->left);
		cout << root->data << " ";
	}
}
void onlyRight(node* root) {
	if (root != NULL) {
		cout << root->data << " ";
		onlyRight(root->right);
	}
}

void topView(node * root) {

	if (root->left != NULL) {
		onlyLeft(root->left);
	}
	cout << root->data << " ";
	if (root->right != NULL) {
		onlyRight(root->right);
	}

}