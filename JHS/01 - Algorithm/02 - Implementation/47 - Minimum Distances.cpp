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


int main() {
	int n;
	cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	int min = -1;
	vector<int> AlreadyAppeared;        //���� ���� �ִ� ���ڸ� �����ϴ� vector
	for (int A_i = 0; A_i<n; A_i++) {
		bool AA = false;
		for (int AA_i = 0; AA_i<AlreadyAppeared.size(); AA_i++) {
			if (AlreadyAppeared[AA_i] == A[A_i]) {
				AA = true;
			}
		}

		if (AA == false) {
			//���� �� ���� �����̸� AA�� ����
			AlreadyAppeared.push_back(A[A_i]);
		}
		else {
			//���� �� �ִ� ������ ��� �ڷ� Ž���Ͽ� '���� ����� ���� ����'������ �Ÿ� ���
			int dis = 0;
			for (int A_j = A_i - 1; A_j >= 0; A_j--) {
				if (A[A_j] == A[A_i]) {
					dis = A_i - A_j;
					if (min <0) {
						min = dis;
					}
					else {
						if (dis < min) {
							min = dis;
						}
					}
				}
			}
		}
	}

	cout << min;

	return 0;
}
