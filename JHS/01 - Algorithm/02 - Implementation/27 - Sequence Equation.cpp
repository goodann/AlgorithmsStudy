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
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n;
	cin >> n;

	vector<int> x(n);
	for (int n_i = 0; n_i<n; n_i++) {
		cin >> x[n_i];
	}

	vector<int> px(n);
	for (int n_i = 0; n_i<n; n_i++) {
		px[x[n_i] - 1] = n_i + 1;
	}


	for (int n_i = 0; n_i<n; n_i++) {
		cout << px[px[n_i] - 1] << endl;
	}

	return 0;
}
