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

	int ar_size;
	cin >> ar_size;
	//scanf("%d", &_ar_size);
	int ar[ar_size], ar_i;
	for (ar_i = 0; ar_i < ar_size; ar_i++) {
		cin >> ar[ar_i];
		//scanf("%d", &_ar[_ar_i]); 
	}

	insertionSort(ar_size, ar);

	cout << ar[ar_size / 2];

	return 0;
}
