#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n;
	int k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int n_i = 0; n_i<n; n_i++) {
		cin >> arr[n_i];
	}

	vector<int> arrk(k, 0);
	for (int n_i = 0; n_i<n; n_i++) {
		arrk[arr[n_i] % k]++;
	}


	int count = 0;
	// arrk = 0
	if (arrk[0] > 0) {
		count += 1;
	}

	// 0 < arrk < k/2 
	for (int k_i = 1; k_i<(float)k / 2; k_i++) {
		if (arrk[k_i] > arrk[k - k_i]) {
			count += arrk[k_i];
		}
		else {
			count += arrk[k - k_i];
		}
	}

	// arrk = k/2
	if (k % 2 == 0 && arrk[k / 2] > 0) {
		count += 1;
	}

	cout << count;

	return 0;
}
