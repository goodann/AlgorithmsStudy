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
	int t;
	cin >> t;

	unordered_map<char, char> cmap;
	cmap[']'] = '[';
	cmap[')'] = '(';
	cmap['}'] = '{';

	for (int a0 = 0; a0 < t; a0++) {
		string s;
		cin >> s;

		stack<char> cstack;

		bool isCorrect = true;
		int s0 = 0;

		while (isCorrect && s0 < s.length()) {

			switch (s.at(s0)) {
			case '[':
			case '(':
			case '{':
				cstack.push(s.at(s0));
				break;

			case ']':
			case ')':
			case '}':
				if (cstack.size() > 0 && cstack.top() == cmap[s.at(s0)]) {
					cstack.pop();
				}
				else {
					isCorrect = false;
				}
				break;
			}
			s0++;
		}

		if (isCorrect && cstack.size() == 0) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
