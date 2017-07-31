#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		int n;
		int c;
		int m;
		cin >> n >> c >> m;

		int w = 0;
		int count = 0;
		//µ·À¸·Î »ç¸Ô±â
		w = n / c;
		count += w;

		//º¸³Ê½º·Î ¸Ô±â
		while (w >= m) {
			w -= m;
			w++;
			count++;
		}

		cout << count << endl;
	}
	return 0;
}
