#pragma once
#include"Node.h"
class BinaryTree
{
protected:
	Node* root;
	void PreOrder(Node* root);
	void InOrder(Node* root);
	void PostOrder(Node* root);
	void DeleteAll(Node* root);

public:
	BinaryTree(Node* root);
	BinaryTree();
	~BinaryTree();
	void PrintPreOrder();
	void PrintInOrder();
	void PrintPostOrder();
	void Clear();
	virtual void InsertNode(Node* node) = 0;
	virtual void DeleteNode(int value) = 0;
};

