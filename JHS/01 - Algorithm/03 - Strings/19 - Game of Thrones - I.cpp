#include <bits/stdc++.h>

using namespace std;

string gameOfThrones(string s) {
	// Complete this function
	vector<int> sc(26, 0);
	for (int i = 0; i<s.size(); i++) {
		sc[s[i] - 'a']++;
	}

	if (s.size() % 2 == 0) {
		for (int i = 0; i<26; i++) {
			if (sc[i] % 2 != 0) {
				return "NO";
			}
		}
		return "YES";
	}
	else {
		int cnt = 0;
		for (int i = 0; i<26; i++) {
			if (sc[i] % 2 != 0) {
				cnt++;
			}
		}
		if (cnt < 2) {
			return "YES";
		}
		else {
			return "NO";
		}
	}

}

int main() {
	string s;
	cin >> s;
	string result = gameOfThrones(s);
	cout << result << endl;
	return 0;
}
