node * lca(node * root, int v1, int v2)
{
	if (root->data > v1 && root->data > v2) {
		root = lca(root->left, v1, v2);
	}
	else if (root->data < v1 && root->data < v2) {
		root = lca(root->right, v1, v2);
	}

	return root;
}
