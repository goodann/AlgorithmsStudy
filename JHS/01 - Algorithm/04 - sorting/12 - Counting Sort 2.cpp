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

	vector<int> unsorted(n);
	vector<int> count(100);
	vector<int> countSum(100);
	vector<int> sorted(n);

	for (int i = 0; i<n; i++) {
		int x;
		cin >> x;
		unsorted[i] = x;
		count[x]++;
	}

	for (int i = 0; i<100; i++) {
		int sum = 0;
		for (int j = 0; j <= i; j++) {
			sum += count[j];
		}
		countSum[i] = sum;
	}

	for (int i = 0; i<n; i++) {
		sorted[countSum[unsorted[i]] - 1] = unsorted[i];
		countSum[unsorted[i]]--;
	}

	for (int i = 0; i<n; i++) {
		cout << sorted[i] << " ";
	}



	return 0;
}
