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

-�Է�
������ ���� space station�� �ִ� ������ ��ȣ�� �Է¹޴´�

-���
���� ����� space stations������ �Ÿ��� ���� �� ���ø� ã��
�� ���ÿ��� ���� ����� space stations������ �Ÿ��� ����Ѵ�
*/

int main() {

	//�Է�==
	int n;
	int m;
	cin >> n >> m;
	vector<int> c(m);
	for (int c_i = 0; c_i < m; c_i++) {
		cin >> c[c_i];
	}

	//����==
	int max = 0;                            //�ִ� �Ÿ��� ������ ����

	for (int i = 0; i<n; i++) {
		int min = n;                        //�ּ� �Ÿ��� ������ ����
		for (int c_i = 0; c_i<m; c_i++) {       //��� ���ø� Ž��
			if (abs(i - c[c_i]) < min) {      //���� ���ÿ��� ���� ����� space station������ �Ÿ��� ���
				min = abs(i - c[c_i]);
			}
		}
		if (min > max) {
			max = min;                      //�ִ��̸� ����
		}
	}

	//���==
	cout << max;

	return 0;
}
