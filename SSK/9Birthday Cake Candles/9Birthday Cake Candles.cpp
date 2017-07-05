// 9Birthday Cake Candles.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
	// Complete this function
	int max = 0;
	for (int i = 0;i<n;i++)
	{
		if (ar[i]>max)
			max = ar[i];
	}
	int count = 0;
	for (int i = 0;i<n;i++)
	{
		if (ar[i] == max)
			count++;
	}
	return count;
}

int main() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int ar_i = 0; ar_i < n; ar_i++) {
		cin >> ar[ar_i];
	}
	int result = birthdayCakeCandles(n, ar);
	cout << result << endl;
	return 0;
}
