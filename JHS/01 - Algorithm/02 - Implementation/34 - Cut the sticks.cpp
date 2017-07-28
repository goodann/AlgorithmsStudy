#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int arr_i = 0; arr_i < n; arr_i++) {
		cin >> arr[arr_i];
	}

	while (arr.size() > 0) {
		int min;
		min = arr[0];

		int count = 0;

		for (int arr_i = 1; arr_i<arr.size(); arr_i++) {
			if (arr[arr_i] < min) {
				min = arr[arr_i];
			}
		}

		for (int arr_i = 0; arr_i<arr.size(); arr_i++) {
			if (arr[arr_i] >= min) {
				arr[arr_i] -= min;
				count++;
				if (arr[arr_i] == 0) {
					arr.erase(arr.begin() + arr_i);
					arr_i--;
				}
			}
		}
		cout << count << endl;
	}

	return 0;
}
