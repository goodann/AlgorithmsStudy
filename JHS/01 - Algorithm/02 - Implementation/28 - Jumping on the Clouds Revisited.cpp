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
	int k;
	cin >> n >> k;
	vector<int> c(n);
	for (int c_i = 0; c_i < n; c_i++) {
		cin >> c[c_i];
	}

	int pos = 0;
	int E = 100;
	do {
		E--;
		pos = (pos + k) % n;
		if (c[pos] == 1) {
			E -= 2;
		}
	} while (E > 0 && pos != 0);

	cout << E;

	return 0;
}
