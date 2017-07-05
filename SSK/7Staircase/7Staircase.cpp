// 7Staircase.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	for (int i = 0;i<n;i++) {
		for (int j = 0;j<n - (i + 1);j++) {
			cout << " ";
		}
		for (int j = 0;j<i + 1;j++) {
			cout << "#";
		}
		cout << endl;
	}

	return 0;
}
