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
	int d;
	cin >> d;

	vector<int> arr(n);
	for (int n_i = 0; n_i<n; n_i++) {
		cin >> arr[n_i];
	}

	int count = 0;
	for (int arr_i = 0; arr_i<n; arr_i++) {
		int arr_j = arr_i + 1;
		//arr_i 다음 값부터 arr[arr_i] + d 까지 탐색
		while (arr_j < arr.size() && arr[arr_j] < arr[arr_i] + d) {
			arr_j++;
		}
		if (arr[arr_j] == arr[arr_i] + d) {

			int arr_k = arr_j + 1;
			//arr_j 다음 값부터 arr[arr_j] + d 까지 탐색
			while (arr_k < arr.size() && arr[arr_k] < arr[arr_j] + d) {
				arr_k++;
			}
			if (arr[arr_k] == arr[arr_j] + d) {

				count++;

			}

		}
	}

	cout << count;

	return 0;
}
