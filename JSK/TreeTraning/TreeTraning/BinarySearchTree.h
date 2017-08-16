#pragma once
#include "BinaryTree.h"

class BinarySearchTree :
	public BinaryTree
{
	
public:
	BinarySearchTree();
	~BinarySearchTree();
	virtual void InsertNode(Node* node);
	virtual void DeleteNode(int value);
	void FindValue(int value);
	void transplant(Node* u, Node* v);

};

