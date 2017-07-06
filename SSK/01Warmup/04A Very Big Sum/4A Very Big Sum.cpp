// 4A Very Big Sum.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<vector>
#include<iostream>

using namespace std;

long aVeryBigSum(int n, vector <long> ar) {
	// Complete this function
	long sum = 0;
	for (int i = 0;i<n;i++)
		sum += ar[i];
	return sum;
}

int main() {
	int n;
	cin >> n;
	vector<long> ar(n);
	for (int ar_i = 0; ar_i < n; ar_i++) {
		cin >> ar[ar_i];
	}
	long result = aVeryBigSum(n, ar);
	cout << result << endl;
	return 0;
}
