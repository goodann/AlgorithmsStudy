#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(vector <int>  ar) {
	int n = ar.size();

	for (int i = 0; i<n; i++) {

		if (i>0 && ar[i - 1] > ar[i]) {
			int temp = ar[i];
			int j = i - 1;
			while (j >= 0 && ar[j] > temp) {
				ar[j + 1] = ar[j];
				for (int ar_i = 0; ar_i<n; ar_i++) {
					cout << ar[ar_i] << " ";
				}
				cout << endl;

				j--;
			}
			ar[j + 1] = temp;

			for (int ar_i = 0; ar_i<n; ar_i++) {
				cout << ar[ar_i] << " ";
			}
			cout << endl;

			j++;
		}
	}

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
