#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void insertionSort(int ar_size, int *  ar) {
	int n = ar_size;

	for (int i = 1; i<n; i++) {

		if (i>0 && ar[i - 1] > ar[i]) {
			int temp = ar[i];
			int j = i - 1;

			while (j >= 0 && ar[j] > temp) {
				ar[j + 1] = ar[j];
				j--;
			}
			ar[j + 1] = temp;


			j++;
		}

	}

}
int main(void) {

	int _ar_size;
	cin >> _ar_size;
	//scanf("%d", &_ar_size);
	int ar[_ar_size], _ar_i;
	for (_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
		cin >> ar[_ar_i];
		//scanf("%d", &_ar[_ar_i]); 
	}

	insertionSort(_ar_size, ar);

	int min = 10000;
	vector< pair<int, int> > result;

	for (int i = 0; i<_ar_size - 1; i++) {
		if (ar[i + 1] - ar[i] < min) {
			min = ar[i + 1] - ar[i];
			result.clear();
			result.push_back(make_pair(ar[i], ar[i + 1]));
		}
		else if (ar[i + 1] - ar[i] == min) {
			result.push_back(make_pair(ar[i], ar[i + 1]));
		}
	}

	for (int i = 0; i<result.size(); i++) {
		cout << result[i].first << " " << result[i].second << " ";
	}

	return 0;
}


