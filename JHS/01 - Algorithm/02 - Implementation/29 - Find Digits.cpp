#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include <string>

int main() {
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		int n;
		cin >> n;

		int count = 0;

		string s = to_string(n);
		vector<int> a(s.length());
		for (int s_i = 0; s_i<s.length(); s_i++) {
			a[s_i] = s.at(s_i) - '0';
		}
		for (int a_i = 0; a_i<a.size(); a_i++) {
			if (a[a_i] != 0 && n % a[a_i] == 0) {
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
