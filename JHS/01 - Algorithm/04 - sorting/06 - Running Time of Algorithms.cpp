#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void insertionSort(vector <int>  ar) {
	int n = ar.size();

	int count = 0;
	for (int i = 0; i<n; i++) {

		if (i>0 && ar[i - 1] > ar[i]) {
			int temp = ar[i];
			int j = i - 1;
			while (j >= 0 && ar[j] > temp) {
				ar[j + 1] = ar[j];
				count++;
				j--;
			}
			ar[j + 1] = temp;

			j++;
		}
	}

	cout << count;
}
int main(void) {
	vector <int>  _ar;
	int _ar_size;
	cin >> _ar_size;
	for (int _ar_i = 0; _ar_i<_ar_size; _ar_i++) {
		int _ar_tmp;
		cin >> _ar_tmp;
		_ar.push_back(_ar_tmp);
	}

	insertionSort(_ar);
	return 0;
}
