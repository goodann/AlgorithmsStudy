#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int t;
	cin >> t;

	for (int t_i = 0; t_i<t; t_i++) {
		int a;
		int b;
		cin >> a >> b;

		int a0 = 0;
		int b0 = 0;
		unsigned int i = 0;
		bool flag = true;

		while (i<100000 && flag == true) {
			if (a0 == 0 && (i*i) >= a) {
				a0 = i;
			}
			if ((i*i) <= b) {
				b0 = i;
			}
			else {
				flag = false;
			}
			i++;
		}
		//cout << "a : " << a0 << endl;
		//cout << "b : " << b0 << endl;
		cout << b0 - a0 + 1 << endl;
	}

	return 0;
}
