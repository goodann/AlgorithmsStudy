#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include <string>

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int i, j, k;
	cin >> i >> j >> k;

	int count = 0;
	for (int x = i; x <= j; x++) {
		string s = to_string(x);

		for (int s_i = 0; s_i<s.length() / 2; s_i++) {
			char temp = s[s_i];
			s[s_i] = s[s.length() - s_i - 1];
			s[s.length() - s_i - 1] = temp;
		}
		int x2 = stoi(s);

		if (abs(x - x2) % k == 0) {
			count++;
		}
	}
	cout << count;

	return 0;
}
