#include <bits/stdc++.h>
using namespace std;

void quickSort(vector <int> &arr) {
	// Complete this function


	if (arr.size() <= 1) {
		return;
	}

	vector<int> left;
	vector<int> right;

	int middle = arr[0];
	for (int i = 1; i<arr.size(); i++) {
		if (arr[i] < middle) {
			left.push_back(arr[i]);
		}
		else {
			right.push_back(arr[i]);
		}
	}

	quickSort(left);
	quickSort(right);

	arr.clear();
	for (int i = 0; i<left.size(); i++) {
		arr.push_back(left[i]);
	}
	arr.push_back(middle);
	for (int i = 0; i<right.size(); i++) {
		arr.push_back(right[i]);
	}


	for (int i = 0; i<arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

}

int main()
{
	int n;
	cin >> n;

	vector <int> arr(n);
	for (int i = 0; i < (int)n; ++i) {
		cin >> arr[i];
	}

	quickSort(arr);

	return 0;
}
