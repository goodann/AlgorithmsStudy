// 8Mini-Max Sum.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	vector<int> arr(5);
	for (int arr_i = 0; arr_i < 5; arr_i++) {
		cin >> arr[arr_i];
	}
	long long int max = LLONG_MIN, min = LLONG_MAX;
	for (int i = 0;i<5;i++) {
		long long int sum = 0;
		for (int j = 0;j<5;j++) {
			if (i == j)
				continue;
			sum += arr[j];
		}
		if (sum>max)
			max = sum;
		if (sum<min)
			min = sum;

	}
	cout << min << " " << max;
	return 0;
}
