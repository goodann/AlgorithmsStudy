#pragma once
#include "BinarySearchTree.h"
class RedBlackTree :
	public BinarySearchTree
{
	void InsertCase1(Node* node);
	void InsertCase2(Node* node);
	void InsertCase3(Node* node);
	void InsertCase4(Node* node);
	void InsertCase5(Node* node);
	void RotateLeft(Node* node);
	void RotateRight(Node* node);
	Node* Uncle(Node* n);
	Node* GrandParents(Node* node);
public:
	static Node* NIL;
	RedBlackTree();
	~RedBlackTree();
	virtual void InsertNode(Node* node);
	virtual void DeleteNode(Node* node);
};

