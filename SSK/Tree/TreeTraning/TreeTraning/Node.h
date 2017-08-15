#pragma once
enum color
{
	RED,
	BLACK
};
struct Node
{
	int data;
	color state;
	Node* left;
	Node* right;
	Node(int i) { data = i; left = nullptr; right = nullptr; };
}; 
