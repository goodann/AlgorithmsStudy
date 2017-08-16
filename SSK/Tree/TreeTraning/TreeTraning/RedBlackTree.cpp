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
	//node->left = NIL;
	//node->right = NIL;
	InsertCase1(node);
}
void RedBlackTree::DeleteNode(int value) {
	Node* now = root;
	bool isLeft = false;
	bool isDelete = false;
	while (!isDelete) {
		if (now->data > value) {
			if (now->left != nullptr) {
				now = now->left;
				isLeft = true;
			}
			else {
				return;
			}
		}
		else if (now->data < value) {
			if (now->right != nullptr) {
				now = now->right;
				isLeft = false;
			}
			else {
				return;
			}

		}
		else {
			//find
			DeleteCase1(now);
			isDelete = true;
		}
	}


}
Node* RedBlackTree::sibling(Node* n) {
	if (n = n->parents->left)
		return n->parents->right;
	else
		return n->parents->left;
}
void RedBlackTree::DeleteCase1(Node* node) {
	if (node->parents != nullptr) {
		DeleteCase2(node);
	}
}
void RedBlackTree::DeleteCase2(Node* node) {
	Node* sibl = sibling(node);
	if (sibl->state == color::RED) {
		node->parents->state = color::RED;
		sibl->state = color::BLACK;
		if (node == node->parents->left)
			RotateLeft(node->parents);
		else
			RotateRight(node->parents);
	}
	DeleteCase3(node);
}
void RedBlackTree::DeleteCase3(Node* node) {
	Node* sibl = sibling(node);
	if ((node->parents->state == color::BLACK) &&
		(sibl->state == color::BLACK) &&
		(sibl->left->state == color::BLACK) &&
		(sibl->right->state == BLACK)) {
		sibl->state = color::RED;
		DeleteCase1(node->parents);
	}
	else {
		DeleteCase4(node);
	}
		
}
void RedBlackTree::DeleteCase4(Node* node) {
	Node* sibl = sibling(node);
	if ((node->parents->state == color::RED) &&
		(sibl->state == color::BLACK) &&
		(sibl->left->state == color::BLACK) &&
		(sibl->right->state == BLACK)) {
		sibl->state = color::RED;
		node->parents->state = color::BLACK;
	}
	else {
		DeleteCase5(node);
	}
}

void RedBlackTree::DeleteCase5(Node* node) {

	Node* sibl = sibling(node);
	if (sibl->state == color::BLACK) {

		if ((node == node->parents->left) &&
			(sibl->left->state == color::RED) &&
			(sibl->right->state == color::BLACK)) {
			sibl->state = color::RED;
			sibl->left->state = color::BLACK;
			RotateRight(sibl);
		}
		else if ((node == node->parents->right) &&
			(sibl->left->state == color::BLACK) &&
			(sibl->right->state == color::RED)) {
			sibl->state = color::RED;
			sibl->right->state = color::BLACK;
			RotateLeft(sibl);
		}
	}
	DeleteCase6(node);
}

void RedBlackTree::DeleteCase6(Node* node) {
	Node* sibl = sibling(node);
	sibl->state = node->parents->state;
	node->parents->state = color::BLACK;
	if (node == node->parents->left) {
		sibl->right->state = color::BLACK;
		RotateLeft(node->parents);
	}
	else {
		sibl->left->state = color::BLACK;
		RotateRight(node->parents);
	}
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
	Node* grandParent;
	if ((uncleNode != nullptr) && (uncleNode->state == color::RED)) {
		node->parents->state = color::BLACK;
		uncleNode->state = color::BLACK;
		grandParent = GrandParents(node);
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
	else {
		root = right;
	}

}
void RedBlackTree::RotateRight(Node* node) {
	Node* left = node->left;
	Node* parent = node->parents;
	if (left->right != nullptr)
		left->right->parents = node;
	node->left = left->right;
	node->parents = left;
	left->right = node;
	left->parents = parent;
	if (parent != nullptr) {
		if (parent->right == node) {
			parent->right = left;
		}
		else {
			parent->left = left;
		}
	}
	else {
		root = left;
	}
}