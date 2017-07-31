/*The tree node has data, left child and right child
class Node {
int data;
Node* left;
Node* right;
};
*/

int height(Node* root) {
	// Write your code here.
	int max_depth;                                  //�ִ� depth���� ������ ����

	if (root != NULL) {                               //root��尡 ������ ���
		max_depth = 0;                              //�ڽĳ�尡 ���� ��� 0�� ����. ������ ū �� +1

		int left_depth = height(root->left) + 1;    //left child�� ���ϰ� + 1
		int right_depth = height(root->right) + 1;  //right child�� ���ϰ� + 1

		if (left_depth > right_depth) {               //left�� right�� ū ���� �����Ѵ�
			max_depth = left_depth;
		}
		else {
			max_depth = right_depth;
		}
	}
	else {                                          //root��尡 ���� ���
		max_depth = -1;                             //-1�� ����
	}

	return max_depth;                               //��ȯ

													//��� : ��� �� ��忡�� 0�� ��ȯ�ϰ� ���� ���ϵ��� ��ȯ�� �� ū ���� ���� 1�� ���ؼ� ��ȯ�Ѵ�.
}