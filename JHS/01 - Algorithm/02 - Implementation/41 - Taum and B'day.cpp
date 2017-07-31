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
	for (int a0 = 0; a0 < t; a0++) {
		long b;
		long w;
		cin >> b >> w;
		long x;
		long y;
		long z;
		cin >> x >> y >> z;

		//==
		long long int total = 0;

		if ((y + z) < x) {
			total = b * (y + z) + w * y;
		}
		else if ((x + z) < y) {
			total = b * x + w * (x + z);
		}
		else {
			total = b*x + w*y;
		}

		cout << total << endl;
		//==
	}
	return 0;
}
