#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		int n;
		cin >> n;

		int H = 1;
		for (int n_i = 1; n_i <= n; n_i++) {
			if (n_i % 2 == 0) {
				H += 1;
			}
			else {
				H = 2 * H;
			}
		}
		cout << H << endl;
	}
	return 0;
}
