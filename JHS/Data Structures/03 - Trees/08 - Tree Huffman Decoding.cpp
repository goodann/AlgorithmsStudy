/*
The structure of the node is

typedef struct node
{
int freq;
char data;
node * left;
node * right;

}node;

*/


void decode_huff(node * root, string s)
{
	node* cursor;

	cursor = root;

	int len = s.length();

	for (int i = 0; i<len; i++) {
		if (s.at(i) == '0') {
			cursor = cursor->left;
		}
		else {
			cursor = cursor->right;
		}

		if (cursor->data != '\0') {
			cout << cursor->data;
			cursor = root;
		}
	}
}