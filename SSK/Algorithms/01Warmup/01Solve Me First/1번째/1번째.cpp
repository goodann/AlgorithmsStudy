// 1번째.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int solveMeFirst(int a, int b) {
	// Hint: Type return a+b; below:
	return a + b;
}
int main() {
	int num1, num2;
	int sum;
	cin >> num1 >> num2;
	sum = solveMeFirst(num1, num2);
	cout << sum;
	return 0;
}
