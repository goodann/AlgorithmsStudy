#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
	string s;
	cin >> s;
	string t;
	cin >> t;
	int k;
	cin >> k;

	int s_i = 0;
	bool flag = true;
	if (s.size() > 0) {
		while (flag) {
			if (s[s_i] != t[s_i] || s_i >= s.size() || s_i >= t.size()) {
				flag = false;
			}
			else {
				s_i++;
			}
		}
	}

	int result = (s.size() - s_i) + (t.size() - s_i);

	if (k < result) {
		cout << "No";
	}
	else {
		if (s_i >(k - result) / 2) {
			if ((k - result) % 2 == 0) {
				cout << "Yes";
			}
			else {
				cout << "No";
			}
		}
		else {
			cout << "Yes";
		}
	}

	return 0;
}
