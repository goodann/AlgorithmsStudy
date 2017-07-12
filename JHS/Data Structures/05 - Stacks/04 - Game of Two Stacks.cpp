#include <bits/stdc++.h>

using namespace std;

int main() {
	int g;
	cin >> g;
	for (int a0 = 0; a0 < g; a0++) {
		int n;
		int m;
		int x;
		cin >> n >> m >> x;
		vector<int> a(n);
		for (int a_i = 0; a_i < n; a_i++) {
			cin >> a[a_i];
		}
		vector<int> b(m);
		for (int b_i = 0; b_i < m; b_i++) {
			cin >> b[b_i];
		}
		// your code goes here

		int count = 0;
		int sum = 0;
		bool flag = true;

		while (flag) {
			if (a.size() > 0) {
				if (b.size() > 0) {
					if (a[0] < b[0]) {
						if (sum + a[0] < x) {
							count++;
							sum += a[0];
							a.erase(a.begin());
						}
						else {
							flag = false;
						}
					}
					else {
						if (sum + b[0] < x) {
							count++;
							sum += b[0];
							b.erase(b.begin());
						}
						else {
							flag = false;
						}
					}
				}
				else {
					if (sum + a[0] < x) {
						count++;
						sum += a[0];
						a.erase(a.begin());
					}
					else {
						flag = false;
					}
				}
			}
			else {
				if (b.size() > 0) {
					if (sum + b[0] < x) {
						count++;
						sum += b[0];
						b.erase(b.begin());
					}
					else {
						flag = false;
					}
				}
				else {
					flag = false;
				}
			}

		}

		cout << count << endl;
	}
	return 0;
}
