bool checkBST(Node* root) {
	//부분실패
	if (root != nullptr) {

		if (root->left != nullptr) {
			if (root->left->data < root->data) {
				if (checkBST(root->left) == false) {
					return false;
				}
			}
			else {
				return false;
			}
		}

		if (root->right != nullptr) {
			if (root->right->data > root->data) {
				if (checkBST(root->right) == false) {
					return false;
				}
			}
			else {
				return false;
			}
		}
	}

	return true;
}
