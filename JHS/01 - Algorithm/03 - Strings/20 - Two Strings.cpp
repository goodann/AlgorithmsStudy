#include <bits/stdc++.h>

using namespace std;

string twoStrings(string s1, string s2) {
	// Complete this function
	vector<int> s1c(26, 0);
	vector<int> s2c(26, 0);
	for (int i = 0; i<s1.size(); i++) {
		s1c[s1[i] - 'a']++;
	}
	for (int i = 0; i<s2.size(); i++) {
		s2c[s2[i] - 'a']++;
	}
	for (int i = 0; i<26; i++) {
		if (s1c[i]>0 && s2c[i]>0) {
			return "YES";
		}
	}
	return "NO";
}

int main() {
	int q;
	cin >> q;
	for (int a0 = 0; a0 < q; a0++) {
		string s1;
		cin >> s1;
		string s2;
		cin >> s2;
		string result = twoStrings(s1, s2);
		cout << result << endl;
	}
	return 0;
}
