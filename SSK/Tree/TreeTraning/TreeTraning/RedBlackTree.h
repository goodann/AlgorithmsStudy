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
	Node* sibling(Node* n);
	void DeleteCase1(Node* node);
	void DeleteCase2(Node* node);
	void DeleteCase3(Node* node);
	void DeleteCase4(Node* node);
	void DeleteCase5(Node* node);
	void DeleteCase6(Node* node);
	Node* Uncle(Node* n);
	Node* GrandParents(Node* node);
public:
	static Node* NIL;
	RedBlackTree();
	~RedBlackTree();
	virtual void InsertNode(Node* node);
	virtual void DeleteNode(int value);
};

