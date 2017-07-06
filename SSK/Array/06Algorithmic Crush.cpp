#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<limits.h>
using namespace std;

int main() {
	int n;
	int m;
	cin >> n;
	cin >> m;
	vector<long long int> list(n);
	long long int max = LLONG_MIN;

	for (int i = 0;i<m;i++) {
		int a;
		int b;
		int k;
		cin >> a;
		cin >> b;
		cin >> k;
		list[a - 1] += k;
		if (b <= n)
			list[b] -= k;
	}
	long long int sum = 0;
	for (int i = 0;i<n;i++) {
		sum += list[i];
		if (sum>max) {
			max = sum;
		}
	}

	cout << max;

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	return 0;
}
