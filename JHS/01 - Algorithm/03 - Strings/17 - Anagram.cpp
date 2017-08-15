#include <bits/stdc++.h>

using namespace std;

int anagram(string s) {
	// Complete this function

	if (s.size() % 2 != 0) {
		return -1;
	}

	string s1;
	string s2;
	s1 = s.substr(0, s.size() / 2);
	s2 = s.substr(s.size() / 2, s.size() / 2);

	vector<int> s1c(26, 0);
	vector<int> s2c(26, 0);
	for (int i = 0; i<s1.size(); i++) {
		s1c[s1[i] - 'a']++;
	}
	for (int i = 0; i<s2.size(); i++) {
		s2c[s2[i] - 'a']++;
	}

	int cnt = 0;
	for (int i = 0; i<26; i++) {
		cnt += abs(s1c[i] - s2c[i]);
	}
	return cnt / 2;
}

int main() {
	int q;
	cin >> q;
	for (int a0 = 0; a0 < q; a0++) {
		string s;
		cin >> s;
		int result = anagram(s);
		cout << result << endl;
	}
	return 0;
}
