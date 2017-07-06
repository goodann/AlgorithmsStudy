#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
	// Complete this function

	int max = 0;
	int count = 0;

	for (int i = 0; i<n; i++) {
		if (max < ar[i]) {
			max = ar[i];
			count = 1;
		}
		else if (max == ar[i]) {
			count++;
		}
	}

	return count;
}

int main() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int ar_i = 0; ar_i < n; ar_i++) {
		cin >> ar[ar_i];
	}
	int result = birthdayCakeCandles(n, ar);
	cout << result << endl;
	return 0;
}
