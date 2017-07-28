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
	vector<int> arr(n);
	for (int n_i = 0; n_i<n; n_i++) {
		cin >> arr[n_i];
	}

	vector<int> cnt(100);
	for (int n_i = 0; n_i<n; n_i++) {
		cnt[arr[n_i]]++;
	}
	int max = 0;
	for (int c_i = 0; c_i<100; c_i++) {
		if (cnt[c_i] > max) {
			max = cnt[c_i];
		}
	}
	cout << n - max;

	return 0;
}
