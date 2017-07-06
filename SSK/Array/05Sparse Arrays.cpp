#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n;
	cin >> n;
	vector<string> arr(n);
	for (int i = 0;i<n;i++)
		cin >> arr[i];
	int q;
	cin >> q;
	vector<string> queries(q);
	vector<int> result(q);

	for (int i = 0;i<q;i++)
		cin >> queries[i];
	for (int i;i<q;i++) {
		for (int j = 0;j<n;j++) {
			if (arr[j] == queries[i]) {
				result[i]++;
			}
		}
	}
	for (int i;i<q;i++) {
		cout << result[i] << endl;
	}


	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	return 0;
}
