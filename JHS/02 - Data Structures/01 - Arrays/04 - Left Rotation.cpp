#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int arr_length;
	int left_rotation;

	cin >> arr_length;
	cin >> left_rotation;

	vector<int> arr(arr_length);
	vector<int> result(arr_length);

	for (int i = 0; i<arr_length; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i<arr_length; i++) {
		result[i] = arr[(i + left_rotation >= arr_length ? i + left_rotation - arr_length : i + left_rotation)];
	}

	for (int i = 0; i<arr_length; i++) {
		cout << result[i] << " ";
	}

	return 0;
}
