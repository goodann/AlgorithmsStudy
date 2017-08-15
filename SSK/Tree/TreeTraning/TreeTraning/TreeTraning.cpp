// TreeTraning.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include"RedBlackTree.h"
#include<random>

int main()
{
	//random_device rng;
	BinarySearchTree BST;
	RedBlackTree  RBT;

	Node* node;
	node = new Node(1);
	BST.InsertNode(node);
	RBT.InsertNode(node);
	node = new Node(7);
	BST.InsertNode(node);
	RBT.InsertNode(node);
	node = new Node(5);
	BST.InsertNode(node);
	RBT.InsertNode(node);

	node = new Node(2);
	BST.InsertNode(node);
	RBT.InsertNode(node);

	node = new Node(4);
	BST.InsertNode(node);
	RBT.InsertNode(node);

	node = new Node(3);
	BST.InsertNode(node);
	RBT.InsertNode(node);

	node = new Node(11);
	BST.InsertNode(node);
	RBT.InsertNode(node);

	node = new Node(9);
	BST.InsertNode(node);
	RBT.InsertNode(node);

	BST.PrintPreOrder();
	BST.PrintPostOrder();
	RBT.PrintPreOrder();
	RBT.PrintPostOrder();
    return 0;
}

