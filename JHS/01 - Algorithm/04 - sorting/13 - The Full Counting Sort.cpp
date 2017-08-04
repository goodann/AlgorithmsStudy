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

	vector< pair<int, string> > unsorted(n);
	vector<int> count(100);
	vector<int> countSum(100);
	vector< pair<int, string> > sorted(n);

	for (int i = 0; i<n; i++) {
		int x;
		string y;

		cin >> x;
		cin >> y;
		if (i + 1 <= n / 2) {
			y = "-";
		}

		unsorted[i] = make_pair(x, y);
		count[x]++;
	}

	for (int i = 0; i<100; i++) {
		int sum = 0;
		for (int j = 0; j <= i; j++) {
			sum += count[j];
		}
		countSum[i] = sum;
	}

	for (int i = n - 1; i >= 0; i--) {
		sorted[countSum[unsorted[i].first] - 1] = unsorted[i];
		countSum[unsorted[i].first]--;
	}

	for (int i = 0; i<n; i++) {
		cout << sorted[i].second << " ";
	}

	return 0;
}
