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
	int q;
	cin >> q;
	for (int a0 = 0; a0 < q; a0++) {
		int n;
		cin >> n;
		vector< vector<int> > M(n, vector<int>(n));
		for (int M_i = 0; M_i < n; M_i++) {
			for (int M_j = 0; M_j < n; M_j++) {
				cin >> M[M_i][M_j];
			}
		}
		// your code goes here
		vector<int> ca(n);          //container amount
		vector<int> ta(n);          //type of each ball amount

		for (int M_i = 0; M_i < n; M_i++) {
			for (int M_j = 0; M_j < n; M_j++) {
				ca[M_i] += M[M_i][M_j];
				ta[M_j] += M[M_i][M_j];
			}
		}

		bool possible = true;
		for (int ca_i = 0; ca_i < n; ca_i++) {
			int ta_i = 0;
			for (ta_i = ca_i; ta_i < n; ta_i++) {
				if (ca[ca_i] == ta[ta_i]) {
					int temp = ta[ta_i];
					ta[ta_i] = ta[ca_i];
					ta[ca_i] = temp;
					break;
				}
			}
			if (ta_i == n) {
				possible = false;
			}
		}


		if (possible) {
			cout << "Possible" << endl;
		}
		else {
			cout << "Impossible" << endl;
		}

	}
	return 0;
}
