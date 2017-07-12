// 6Plus Minus.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	vector<int> arr(n);
	for (int arr_i = 0;arr_i < n;arr_i++) {
		cin >> arr[arr_i];
	}
	float pos = 0, neg = 0, zero = 0;
	for (int i = 0;i<n;i++) {
		if (arr[i]>0)
			pos += 1.0f;
		else if (arr[i]<0)
			neg += 1.0f;
		else
			zero += 1.0f;
	}
	cout << pos / n << endl;
	cout << neg / n << endl;
	cout << zero / n << endl;


	return 0;
}
