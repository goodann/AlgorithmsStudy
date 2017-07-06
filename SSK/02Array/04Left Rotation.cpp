#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	int d;
	cin >> n;
	cin >> d;
	vector<int> arr(n);
	for (int i = 0;i<n;i++) {
		cin >> arr[i];
	}
	vector<int> result(n);
	for (int i = 0;i<n;i++) {
		int i2 = i - d;
		while (i2<0)
			i2 += n;
		result[i2] = arr[i];
	}
	for (int i = 0;i<n;i++) {
		cout << result[i] << " ";
	}

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	return 0;
}

