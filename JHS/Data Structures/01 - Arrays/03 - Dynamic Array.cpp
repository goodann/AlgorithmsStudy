#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n;
	int q;

	int lastAnswer = 0;

	cin >> n;
	cin >> q;


	vector<vector<int>> seqList(n);
	for (int i = 0; i<n; i++) {
		vector<int> seq;
		seqList[i] = seq;
	}

	for (int i = 0; i<q; i++) {
		int typeOfQuery;
		int x;
		int y;
		int seqNum;

		cin >> typeOfQuery;
		cin >> x;
		cin >> y;
		seqNum = (x^lastAnswer) % n;

		if (typeOfQuery == 1) {
			seqList[seqNum].push_back(y);
		}
		else {
			int seqNum = (x^lastAnswer) % n;
			lastAnswer = seqList[seqNum][y % seqList[seqNum].size()];
			cout << lastAnswer << endl;
		}
	}

	return 0;
}
