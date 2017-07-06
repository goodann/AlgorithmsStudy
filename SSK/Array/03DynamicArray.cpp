#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int w = 3, h = 0;
	//cin>>w;
	int n;
	int lastA = 0;
	cin >> n;
	cin >> h;

	vector< vector<int> > arr(h, vector<int>(w));
	vector<vector<int>> seqList(n);

	for (int i = 0;i<h;i++) {
		for (int j = 0;j<w;j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0;i<h;i++) {
		int x = arr[i][1];
		int y = arr[i][2];
		int seqIndex = ((x^lastA) % n);

		if (arr[i][0] == 1) {
			seqList[seqIndex].push_back(y);
		}
		else {
			int n = seqList[seqIndex].size();
			lastA = seqList[seqIndex][y%n];
			cout << lastA << endl;
		}


	}

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	return 0;
}
