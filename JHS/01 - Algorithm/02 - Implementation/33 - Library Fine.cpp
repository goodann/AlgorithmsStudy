#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int d1;
	int m1;
	int y1;
	cin >> d1 >> m1 >> y1;
	int d2;
	int m2;
	int y2;
	cin >> d2 >> m2 >> y2;

	int result;

	if (y2 < y1) {
		result = 10000;
	}
	else if (y2 > y1) {
		result = 0;
	}
	else {

		if (m2 < m1) {
			result = (m1 - m2) * 500;
		}
		else if (m2 > m1) {
			result = 0;
		}
		else {

			if (d2 < d1) {
				result = (d1 - d2) * 15;
			}
			else {
				result = 0;
			}
		}
	}

	cout << result;



	return 0;
}
