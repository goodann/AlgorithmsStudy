#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int t;
	cin >> n >> t;
	vector<int> width(n);
	for (int width_i = 0; width_i < n; width_i++) {
		cin >> width[width_i];
	}
	for (int a0 = 0; a0 < t; a0++) {
		int i;
		int j;
		cin >> i >> j;

		//문제 요약 : 구간중 가장 좁은 width 구하기
		int min = width[i];
		for (int w_i = i + 1; w_i <= j; w_i++) {
			if (width[w_i] < min) {
				min = width[w_i];
			}
		}
		cout << min << endl;
	}
	return 0;
}
