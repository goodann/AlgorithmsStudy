#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int numOfStrings;
	int numOfQueries;

	cin >> numOfStrings;
	vector<string> strings(numOfStrings);

	for (int i = 0; i<numOfStrings; i++) {
		cin >> strings[i];
	}

	cin >> numOfQueries;
	vector<string> queries(numOfQueries);

	for (int i = 0; i<numOfQueries; i++) {
		cin >> queries[i];
	}

	//=

	for (int i = 0; i<numOfQueries; i++) {
		int count = 0;

		for (int j = 0; j<numOfStrings; j++) {
			if (queries[i].compare(strings[j]) == 0) {
				count++;
			}
		}

		cout << count << "\n";
	}

	return 0;
}