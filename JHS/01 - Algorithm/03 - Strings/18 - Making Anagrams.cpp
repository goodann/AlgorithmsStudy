#include <bits/stdc++.h>

using namespace std;

int makingAnagrams(string s1, string s2) {
	// Complete this function
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

	return cnt;
}

int main() {
	string s1;
	cin >> s1;
	string s2;
	cin >> s2;
	int result = makingAnagrams(s1, s2);
	cout << result << endl;
	return 0;
}
