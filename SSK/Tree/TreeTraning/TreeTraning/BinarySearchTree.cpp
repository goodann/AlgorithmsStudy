#include "stdafx.h"
#include "BinarySearchTree.h"


BinarySearchTree::BinarySearchTree()
{
}


BinarySearchTree::~BinarySearchTree()
{
}

void BinarySearchTree::InsertNode(Node* node) {
	Node* now = root;
	bool isInsert = false;
	if (now == nullptr) {
		root = node;

	}
	else {
		while (!isInsert) {
			if (now->data > node->data) {
				if (now->left != nullptr) {
					now = now->left;
				}
				else {
					now->left = node;
					node->parents = now;
					isInsert = true;
				}
			}
			else {
				if (now->right != nullptr) {
					now = now->right;
				}
				else {
					now->right = node;
					node->parents = now;
					isInsert = true;
				}

			}
		}
	}
}
void BinarySearchTree::DeleteNode(int value) {
	Node* now = root;
	//Node* parents = root;
	bool isLeft=false;
	bool isDelete = false;	
	while (!isDelete) {
		if (now->data > value) {
			if (now->left != nullptr) {
				//parents = now;
				now = now->left;
				isLeft = true;
			}
			else {
				return;
			}
		}
		else if(now->data < value){
			if (now->right != nullptr) {
				//parents = now;
				now = now->right;
				isLeft = false;
			}
			else {
				return;
			}

		}
		else {
			//find
			if (now->left == nullptr && now->right == nullptr) {
				if (isLeft) {
					now->parents->left = nullptr;
					isDelete = true;
					delete(now);
				}
				else {
					now->parents->right = nullptr;
					delete(now);
				}
			}
			else {
				if (now->left != nullptr && now->right == nullptr) {
					if (root == now) {
						root = now->left;
						isDelete = true;
						delete(now);
					}
					else {

						if (isLeft) {
							now->parents->left = now->left;
							isDelete = true;
							delete(now);
						}
						else {
							now->parents->right = now->left;
							isDelete = true;
							delete(now);
						}
					}
				}
				else if(now->left == nullptr && now->right != nullptr) {
					if (root == now) {
						root = now->right;
						isDelete = true;
						delete(now);
					}
					else {
						if (isLeft) {
							now->parents->left = now->right;
							isDelete = true;
							delete(now);
						}
						else {
							now->parents->right = now->right;
							isDelete = true;
							delete(now);
						}
					}
				}
				else {
					Node* findNode = now->right;
					while (findNode->left!=nullptr) {
						findNode=findNode->left;
					}
					int temp= findNode->data;
					DeleteNode(findNode->data);
					now->data = temp;
				}


			}

		}
	}
}

void BinarySearchTree::FindValue(int value) {
	Node* now = root;
	bool isFind = false;
	if (now == nullptr) {
		return;

	}
	else {
		while (!isFind) {
			if (now->data == value) {
				printf("%d", now->data);
				isFind = true;
			}
			else {
				printf("%d->", now->data);
				if (now->data > value) {
					if (now->left != nullptr) {
						now = now->left;
					}
					else {
						printf("notFound\n");
						isFind = true;
					}
				}
				else {
					if (now->right != nullptr) {
						now = now->right;
					}
					else {
						printf("notFound\n");
						isFind = true;
					}

				}
			}
		}
	}
}