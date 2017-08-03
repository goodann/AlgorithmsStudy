#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
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

		for (int ar_i = 0; ar_i<n; ar_i++) {
			cout << ar[ar_i] << " ";
		}
		cout << endl;
	}

}
int main(void) {

	int _ar_size;
	cin >> _ar_size;
	//scanf("%d", &_ar_size);
	int _ar[_ar_size], _ar_i;
	for (_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
		cin >> _ar[_ar_i];
		//scanf("%d", &_ar[_ar_i]); 
	}

	insertionSort(_ar_size, _ar);

	return 0;
}
