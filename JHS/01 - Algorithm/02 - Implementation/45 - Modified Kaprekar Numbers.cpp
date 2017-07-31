#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int p;
	int q;
	cin >> p >> q;

	bool isThereAnyNumber = false;

	for (int i = p; i <= q; i++) {
		int len = 1;
		while (pow(10, len) <= i) {
			len += 1;
		}
		long ii = pow(i, 2);
		long po = pow(10, len);
		long a = ii / po;
		long b = ii % po;

		if (a + b == i) {
			cout << i << " ";
			isThereAnyNumber = true;
		}
	}

	if (!isThereAnyNumber) {
		cout << "INVALID RANGE";
	}

	return 0;
}
