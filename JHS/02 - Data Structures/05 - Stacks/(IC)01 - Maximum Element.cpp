#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//부분성공
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int cmd_count;
	cin >> cmd_count;

	vector<int> stack;

	for (int i = 0; i<cmd_count; i++) {
		int cmd;
		cin >> cmd;

		switch (cmd) {
		case 1:
			int num;
			cin >> num;
			stack.push_back(num);
			break;
		case 2:
			stack.pop_back();
			break;
		case 3:
			int max;
			max = stack.front();
			for (int j = 0; j<stack.size(); j++) {
				if (max < stack.at(j)) {
					max = stack.at(j);
				}
			}
			cout << max << endl;
			break;
		}
	}

	return 0;
}
