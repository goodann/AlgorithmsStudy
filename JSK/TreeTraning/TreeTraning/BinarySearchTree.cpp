#include "stdafx.h"
#include "BinarySearchTree.h"
#include <iostream>



BinarySearchTree::BinarySearchTree()
{
}


BinarySearchTree::~BinarySearchTree()
{
}

void BinarySearchTree::InsertNode(Node* node) {
	Node* y = nullptr;
	Node* x = root;
	while (x != nullptr) {
		y = x;
		if (node->data < x->data) {
			x = x->left;
		}
		else {
			x = x->right;
		}
	}
	node->parents = y;

	if (y == nullptr) {
		root = node;
	}
	else if (node->data < y->data){
		y->left = node;
	}
	else {
		y->right = node;
	}

}
void BinarySearchTree::DeleteNode(int value) {
	if (root == nullptr) {
		return;
	}
	Node* y = nullptr;
	Node* x = root;
	Node* z;
	while (x != nullptr) {
		y = x;
		if (x->data >value) {
			x = x->left;
		}
		else {
			x = x->left;
		}
	}
	if (y->data == value) {
		if (y->left == nullptr) {
			transplant(y, y->right);
		}
		else if (y->right == nullptr) {
			transplant(y, y->left);
		}
		else {
			z = y->right;
			while (z->left != nullptr) {
				z = z->left;
			}
			if (z->parents != y) {
				transplant(z, z->right);
				z->right = y->right;
				z->right->parents = z;
			}
			transplant(y, z);
			z->left = y->left;
			z->left->parents = z;
		}
	}
}
void BinarySearchTree::transplant(Node* u, Node* v) {
	if (u->parents == nullptr) {
		root = v;
	}
	else if (u == u->parents->left) {
		u->parents->left = v;
	}
	else {
		u->parents->right = v;
	}
	if (v != nullptr) {
		v->parents = u->parents;
	}
}
void BinarySearchTree::FindValue(int value) {
	if (root== nullptr) {
		std::cout << "no"<<std::endl;
		return;
	}
	Node* y = nullptr;
	Node* x = root;
	while (x != nullptr) {
		y = x;
		if(x->data >value){
			x = x->left;
		}
		else {
			x = x->left;
		}
	}
	std::cout << y->right->data << std::endl;
	std::cout << value << std::endl;

	if (y->data == value) {
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
}