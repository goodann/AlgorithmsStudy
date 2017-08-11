#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int k;
	cin >> k;

	for (int i = 0; i<s.size(); i++) {
		if ('a' <= s[i] && s[i] <= 'z') {
			s[i] -= 'a';
			s[i] = (s[i] + k) % ('z' - 'a' + 1);
			s[i] += 'a';
		}
		if ('A' <= s[i] && s[i] <= 'Z') {
			s[i] -= 'A';
			s[i] = (s[i] + k) % ('Z' - 'A' + 1);
			s[i] += 'A';
		}
	}
	cout << s;

	return 0;
}
