#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> unsorted(n);
	for (int unsorted_i = 0; unsorted_i < n; unsorted_i++) {
		cin >> unsorted[unsorted_i];
	}
	// your code goes here

	for (int i = 0; i<n - 1; i++) {
		for (int j = 0; j<n - i - 1; j++) {
			if (unsorted[j].size() > unsorted[j + 1].size()) {
				string temp = unsorted[j];
				unsorted[j] = unsorted[j + 1];
				unsorted[j + 1] = temp;
			}
			else if (unsorted[j].size() == unsorted[j + 1].size()) {
				if (unsorted[j].compare(unsorted[j + 1]) > 0) {
					string temp = unsorted[j];
					unsorted[j] = unsorted[j + 1];
					unsorted[j + 1] = temp;
				}
			}
			else {

			}
		}
	}

	for (int i = 0; i<n; i++) {
		cout << unsorted[i] << endl;
	}

	return 0;
}
