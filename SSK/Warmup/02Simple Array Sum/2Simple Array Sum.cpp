// 2Simple Array Sum.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

#include<vector>
#include<iostream>
using namespace std;

int simpleArraySum(int n, vector <int> ar) {
	// Complete this function
	int sum = 0;
	for (int i = 0;i<n;i++)
		sum += ar[i];
	return sum;
}
int main() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int ar_i = 0; ar_i < n; ar_i++) {
		cin >> ar[ar_i];
	}
	int result = simpleArraySum(n, ar);
	cout << result << endl;
	return 0;
}
