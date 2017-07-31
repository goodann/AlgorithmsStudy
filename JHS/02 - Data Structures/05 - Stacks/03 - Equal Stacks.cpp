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

int total_sum(vector<int> s) {
	int sum = 0;
	for (int i = 0; i<s.size(); i++) {
		sum += s.at(i);
	}
	return sum;
}

int main() {
	int n1;
	int n2;
	int n3;
	cin >> n1 >> n2 >> n3;
	vector<int> h1(n1);
	for (int h1_i = 0; h1_i < n1; h1_i++) {
		cin >> h1[h1_i];
	}
	vector<int> h2(n2);
	for (int h2_i = 0; h2_i < n2; h2_i++) {
		cin >> h2[h2_i];
	}
	vector<int> h3(n3);
	for (int h3_i = 0; h3_i < n3; h3_i++) {
		cin >> h3[h3_i];
	}


	int h1_s = total_sum(h1);
	int h2_s = total_sum(h2);
	int h3_s = total_sum(h3);
	bool flag = true;

	if (h1_s == h2_s && h1_s == h3_s) {
		flag = false;
	}

	while (flag) {

		if (h1_s > h2_s && h1_s > h3_s) {
			//h1.pop_back();
			h1_s -= h1.at(0);
			h1.erase(h1.begin());
		}
		else {
			if (h2_s > h3_s) {
				//h2.pop_back();
				h2_s -= h2.at(0);
				h2.erase(h2.begin());
			}
			else {
				//h3.pop_back();
				h3_s -= h3.at(0);
				h3.erase(h3.begin());
			}
		}

		if (h1_s == h2_s && h1_s == h3_s) {
			flag = false;
		}
	}

	cout << h1_s;

	return 0;
}
