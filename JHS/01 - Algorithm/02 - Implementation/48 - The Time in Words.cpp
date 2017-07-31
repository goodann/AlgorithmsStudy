#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int h;
	cin >> h;
	int m;
	cin >> m;

	string numbers[21] = { "zero","one", "two", "three", "four", "five",
		"six", "seven", "eight", "nine","ten",
		"eleven","twelve","thirteen","fourteen","fifteen",
		"sixteen","seventeen","eighteen","nineteen","twenty" };

	if (m == 0) {
		cout << numbers[h] << " o' clock";
	}
	else if (m == 15) {
		cout << "quarter past " << numbers[h];
	}
	else if (m == 30) {
		cout << "half past " << numbers[h];
	}
	else if (m == 45) {
		cout << "quarter to " << numbers[h + 1];
	}
	else if (m < 30) {
		if (m == 1) {
			cout << "one minute";
		}
		else if (m <= 20) {
			cout << numbers[m] << " minutes";
		}
		else {
			cout << numbers[20] << " " << numbers[m - 20] << " minutes";
		}
		cout << " past " << numbers[h];
	}
	else {
		if (m == 59) {
			cout << "one minute";
		}
		else if (m >= 40) {
			cout << numbers[60 - m] << " minutes";
		}
		else {
			cout << numbers[20] << " " << numbers[60 - m - 20] << " minutes";
		}
		cout << " to " << numbers[h + 1];
	}


	return 0;
}
