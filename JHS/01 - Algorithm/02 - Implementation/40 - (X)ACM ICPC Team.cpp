#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include <string>

int main() {
	int n;
	int m;
	cin >> n >> m;
	vector<string> topic(n);
	for (int topic_i = 0; topic_i < n; topic_i++) {
		cin >> topic[topic_i];
	}

	int max = 0;
	int count;
	for (int n_i = 0; n_i<n; n_i++) {
		for (int n_j = n_i + 1; n_j<n; n_j++) {

			int cnt = 0;
			for (int m_i = 0; m_i<m; m_i++) {
				if ((topic[n_i].at(m_i) - '0') + (topic[n_j].at(m_i) - '0') != 0) {
					cnt++;
				}
			}
			if (cnt > max) {
				max = cnt;
				count = 1;
			}
			else if (cnt == max) {
				count++;
			}
		}
	}
	cout << max << endl;
	cout << count;

	return 0;
}
