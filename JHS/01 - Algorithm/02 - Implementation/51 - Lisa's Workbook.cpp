#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	//�Է�==
	int n;
	int k;
	cin >> n >> k;

	vector<int> arr(n);

	for (int i = 0; i<n; i++) {
		cin >> arr[i];
	}

	//���==
	int page = 1;
	int count = 0;

	for (int i = 0; i<n; i++) {
		int q = arr[i];
		int qNum = 1;

		while (q > 0) {
			//���� �������� ������ȣ [qNum ~ qNum+k] ���̿� ���� ������ ��ȣ�� ������ count++
			if (page >= qNum && page < qNum + (q > k ? k : q)) {
				count++;
			}
			qNum += k;
			q -= k;
			page++;
		}
	}

	//���==
	cout << count;

	return 0;
}
