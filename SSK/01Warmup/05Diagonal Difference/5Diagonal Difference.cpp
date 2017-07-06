// 5Diagonal Difference.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n;
	cin >> n;
	vector< vector<int> > a(n, vector<int>(n));
	for (int a_i = 0;a_i < n;a_i++) {
		for (int a_j = 0;a_j < n;a_j++) {
			cin >> a[a_i][a_j];
		}
	}
	int sum1 = 0, sum2 = 0;
	for (int i = 0;i<n;i++) {
		sum1 += a[i][i];
		sum2 += a[n - (i + 1)][i];
	}
	cout << abs(sum1 - sum2);
	return 0;
}