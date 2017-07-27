#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include <string>

int main() {
	int n;
	cin >> n;

	vector<int> fact;
	for (int n_i = 1; n_i <= n; n_i++) {

		if (fact.size() == 0) {
			fact.push_back(n_i);
		}
		else {
			for (int f_i = fact.size() - 1; f_i >= 0; f_i--) {
				fact[f_i] = fact[f_i] * n_i;

				string s = to_string(fact[f_i]);
				if (s.size() > 6) {
					if (f_i + 1 == fact.size()) {
						fact.push_back(stoi(s.substr(0, s.size() - 6)));
					}
					else {
						fact[f_i + 1] += stoi(s.substr(0, s.size() - 6));
					}
					fact[f_i] = stoi(s.substr(s.size() - 6, 6));
				}
			}
		}
	}
	for (int f_i = fact.size() - 1; f_i >= 0; f_i--) {
		if (f_i != fact.size() - 1) {
			cout.width(6);
			cout.fill('0');
		}
		cout << fact[f_i];
	}

	return 0;
}
