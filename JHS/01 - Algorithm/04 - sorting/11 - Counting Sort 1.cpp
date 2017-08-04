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

	vector<int> count(100, 0);
	for (int i = 0; i<n; i++) {
		int x;
		cin >> x;
		count[x]++;
	}

	for (int i = 0; i<100; i++) {
		cout << count[i] << " ";
	}


	return 0;
}
