#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

/*
���� ���

-����
N���� ������ �迭�� �Է¹޴´�.
�پ��ִ� �� ���� 1�� ���� �� �ִ�.

-����
��� ���� ¦���� ���� �� �ִ°�

-���
�����ϴٸ� �� �� ���� ���� �ּҰ��� ���ض�
�Ұ����ϴٸ� NO�� ����ϴ�

*/
int main() {
	//�Է�==
	int N;
	cin >> N;
	vector<int> B(N);
	for (int B_i = 0; B_i < N; B_i++) {
		cin >> B[B_i];
	}

	//����==
	int count = 0;                      //���� ���� ��

	for (int B_i = 0; B_i<N; B_i++) {
		if (B[B_i] % 2 != 0) {            //ù ������ ���ʴ�� Ž���ϸ� Ȧ���� ��� �� ���� �� �������� 1�� ���Ѵ�.
			if (B_i + 1 == N) {           //Ȧ���� ���� ������ ���ϰ�� NO�� ����Ѵ�.
				cout << "NO";
				return 0;
			}
			B[B_i]++;
			B[B_i + 1]++;
			count += 2;
		}
	}

	//���==
	cout << count;

	return 0;
}
