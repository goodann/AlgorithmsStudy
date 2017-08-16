// TreeTraning.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include"RedBlackTree.h"
#include<random>

int main()
{
	//random_device rng;
	BinarySearchTree BST;
	//RedBlackTree  RBT;
	BinarySearchTree RBT;

	Node* node;
	printf("Insert:1\n");
	node = new Node(1);
	BST.InsertNode(node);
	node = new Node(1);
	RBT.InsertNode(node);

	printf("Insert:7\n");
	node = new Node(7);
	BST.InsertNode(node);
	node = new Node(7);
	RBT.InsertNode(node);

	printf("Insert:5\n");
	node = new Node(5);
	BST.InsertNode(node);
	node = new Node(5);
	RBT.InsertNode(node);

	printf("Insert:2\n");
	node = new Node(2);
	BST.InsertNode(node);
	node = new Node(2);
	RBT.InsertNode(node);

	printf("Insert:4\n");
	node = new Node(4);
	BST.InsertNode(node);
	node = new Node(4);
	RBT.InsertNode(node);

	printf("Insert:3\n");
	node = new Node(3);
	BST.InsertNode(node);
	node = new Node(3);
	RBT.InsertNode(node);

	printf("Insert:11\n");
	node = new Node(11);
	BST.InsertNode(node);
	node = new Node(11);
	RBT.InsertNode(node);

	printf("Insert:9\n");
	node = new Node(9);
	BST.InsertNode(node);
	node = new Node(9);
	RBT.InsertNode(node);
	
	printf("\nFind 3\n");
	BST.FindValue(3);
	printf("\n");
	RBT.FindValue(3);

	printf("\nPrintPreOrder\n");

	BST.PrintPreOrder();
	printf("\n");
	RBT.PrintPreOrder();

	printf("\n");

	printf("PrintInOrder\n");
	BST.PrintInOrder();
	printf("\n");
	RBT.PrintInOrder();
	printf("\n");

	printf("PrintPostOrder\n");
	
	printf("\n");
	BST.PrintPostOrder();
	
	RBT.PrintPostOrder();
	
	printf("\ndelete 7\n");
	BST.DeleteNode(7);
	RBT.DeleteNode(7);

	printf("PrintPreOrder\n");

	BST.PrintPreOrder();
	printf("\n");
	RBT.PrintPreOrder();

	printf("\n");

	printf("PrintInOrder\n");
	BST.PrintInOrder();
	printf("\n");
	RBT.PrintInOrder();
	printf("\n");

	printf("PrintPostOrder\n");


	BST.PrintPostOrder();
	printf("\n");
	RBT.PrintPostOrder();
	printf("\n");

	printf("delete 1\n");
	BST.DeleteNode(1);
	RBT.DeleteNode(1);

	printf("delete 5\n");
	BST.DeleteNode(5);
	RBT.DeleteNode(5);
	printf("PrintPreOrder\n");

	BST.PrintPreOrder();
	printf("\n");
	RBT.PrintPreOrder();

	printf("\n");

	printf("PrintInOrder\n");
	BST.PrintInOrder();
	printf("\n");
	RBT.PrintInOrder();
	printf("\n");

	printf("PrintPostOrder\n");


	BST.PrintPostOrder();
	printf("\n");
	RBT.PrintPostOrder();
	printf("\n");
	printf("delete 4\n");
	BST.DeleteNode(4);
	RBT.DeleteNode(4);
	printf("\n");
	printf("PrintPreOrder\n");

	BST.PrintPreOrder();
	printf("\n");
	RBT.PrintPreOrder();

	printf("\n");

	printf("PrintInOrder\n");
	BST.PrintInOrder();
	printf("\n");
	RBT.PrintInOrder();
	printf("\n");

	printf("PrintPostOrder\n");


	BST.PrintPostOrder();
	printf("\n");
	RBT.PrintPostOrder();
	printf("\n");



    return 0;
}

