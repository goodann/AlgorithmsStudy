#include "stdafx.h"
#include "RedBlackTree.h"

Node* RedBlackTree::NIL = new Node(0, color::BLACK);
RedBlackTree::RedBlackTree()
{
}


RedBlackTree::~RedBlackTree()
{
}
void RedBlackTree::InsertNode(Node* node) {
	node->state = color::RED;
	BinarySearchTree::InsertNode(node);
	node->left = NIL;
	node->right = NIL;
	if (node == root) {
		//case 1
		
	}
	else {
		//case 2
		
	}
}
void RedBlackTree::DeleteNode(Node* node) {

}

Node* RedBlackTree::GrandParents(Node* node) {
	if ((node != nullptr) && (node->parents != nullptr))
		return node->parents->parents;
	else
		return nullptr;

}

Node* RedBlackTree::Uncle(Node* node) {
	Node* grandParents = GrandParents(node);
	if (grandParents != nullptr) {
		if (grandParents->left == node->parents) {
			return node->right;
		}else{
			return node->left;
		}
	}
	return nullptr;
}

void RedBlackTree::InsertCase1(Node* node) {
	if (node->parents == nullptr)
		node->state = color::BLACK;
	else
		InsertCase2(node);
}
void RedBlackTree::InsertCase2(Node* node) {
	if (node->parents->state == color::BLACK)
		return;
	else
		InsertCase3(node);
}
void RedBlackTree::InsertCase3(Node* node) {
	//case 3
	Node* uncleNode = Uncle(node);
	Node* grandParent = GrandParents(node);
	if ((uncleNode != nullptr) && (uncleNode->state == color::RED)) {
		node->parents->state = color::BLACK;
		uncleNode->state = color::BLACK;
		grandParent->state = color::RED;
		InsertCase1(grandParent);
	}
	else {
		InsertCase4(node);
	}
}
void RedBlackTree::InsertCase4(Node* node) {
	Node* GrandParent = GrandParents(node);

	if ((node == node->parents->right) && (node->parents == GrandParent->left)) {
		RotateLeft(node->parents);
		node = node->left;
	}
	else if ((node == node->parents->left) && (node->parents == GrandParent->right)) {
		RotateRight(node->parents);
		node = node->right;
	}
	InsertCase5(node);
}
void RedBlackTree::InsertCase5(Node* node) {
	Node* grandParent = GrandParents(node);
	node->parents->state = color::BLACK;
	grandParent->state = color::RED;
	if (node == node->parents->left)
		RotateRight(grandParent);
	else
		RotateLeft(grandParent);
}

void RedBlackTree::RotateLeft(Node* node) {
	Node* right = node->right;
	Node* parent = node->parents;
	if (right->left != nullptr)
		right->left->parents = node;
	node->right = right->left;
	node->parents = right;
	right->left = node;
	right->parents = parent;
	if (parent != nullptr) {
		if (parent->left == node) {
			parent->left = right;
		}
		else {
			parent->right = right;
		}
	}

}
void RedBlackTree::RotateRight(Node* node) {
	Node* left = node->left;
	Node* parent = node->parents;
	if (left->right != nullptr)
		left->right->parents = node;
	node->left = left->right;
	node->parents = left;
	left->left = node;
	left->parents = parent;
	if (parent != nullptr) {
		if (parent->right == node) {
			parent->right = left;
		}
		else {
			parent->left = left;
		}
	}
}