#include "stdafx.h"
#include "BinaryTree.h"


BinaryTree::BinaryTree(Node* node)
{
	root = node;
}

BinaryTree::BinaryTree()
{
	root = nullptr;
}

BinaryTree::~BinaryTree()
{
	DeleteAll(root);
}

void BinaryTree::Clear() {
	DeleteAll(root);
}
void BinaryTree::DeleteAll(Node* node) {
	if (node == nullptr)
		return;
	PreOrder(node->left);
	PreOrder(node->right);
	delete node;
}
void BinaryTree::PrintPreOrder() {
	PreOrder(root);
}
void BinaryTree::PrintInOrder() {
	InOrder(root);
}
void BinaryTree::PrintPostOrder() {
	PostOrder(root);
}
void BinaryTree::PreOrder(Node* node) {
	if (node == nullptr)
		return;
	printf("%d ", node->data);
	PreOrder(node->left);
	PreOrder(node->right);
}
void BinaryTree::InOrder(Node* node) {
	if (node == nullptr)
		return;
	PreOrder(node->left);
	printf("%d ", node->data);
	PreOrder(node->right);
}
void BinaryTree::PostOrder(Node* node) {
	if (node == nullptr)
		return;
	PreOrder(node->left);
	PreOrder(node->right);
	printf("%d ", node->data);
}