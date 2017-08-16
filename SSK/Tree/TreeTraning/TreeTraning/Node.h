#pragma once
#include <cstdio>
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
	Node* parents;
	Node(int i) { data = i; left = nullptr; right = nullptr; parents = nullptr;};
	Node(int i, color c) { data = i; state = c;left = nullptr; right = nullptr; parents = nullptr; };
}; 
