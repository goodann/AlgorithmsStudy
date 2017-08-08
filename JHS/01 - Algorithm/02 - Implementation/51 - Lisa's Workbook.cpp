#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	//입력==
	int n;
	int k;
	cin >> n >> k;

	vector<int> arr(n);

	for (int i = 0; i<n; i++) {
		cin >> arr[i];
	}

	//계산==
	int page = 1;
	int count = 0;

	for (int i = 0; i<n; i++) {
		int q = arr[i];
		int qNum = 1;

		while (q > 0) {
			//현재 페이지의 문제번호 [qNum ~ qNum+k] 사이에 현재 페이지 번호가 있으면 count++
			if (page >= qNum && page < qNum + (q > k ? k : q)) {
				count++;
			}
			qNum += k;
			q -= k;
			page++;
		}
	}

	//출력==
	cout << count;

	return 0;
}
