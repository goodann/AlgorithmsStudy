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
	int n;
	cin >> n;
	vector<int> c(n);
	for (int c_i = 0; c_i < n; c_i++) {
		cin >> c[c_i];
	}

	int pos = 0;
	int jcount = 0;
	while (pos < n - 1) {
		if (pos + 2 <= n - 1 && c[pos + 2] == 0) {
			pos += 2;
		}
		else {
			pos += 1;
		}
		jcount++;
	}

	cout << jcount;

	return 0;
}
