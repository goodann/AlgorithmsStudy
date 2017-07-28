#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n;
	cin >> n;

	int count;
	int m = 5;
	for (int n_i = 1; n_i <= n; n_i++) {
		count += m / 2;
		m = (m / 2) * 3;
	}
	cout << count;
	return 0;
}
