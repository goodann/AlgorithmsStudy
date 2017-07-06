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
	vector< vector<int> > arr(6, vector<int>(6));
	for (int arr_i = 0;arr_i < 6;arr_i++) {
		for (int arr_j = 0;arr_j < 6;arr_j++) {
			cin >> arr[arr_i][arr_j];
		}
	}
	int max = INT_MIN;
	for (int i = 1;i<5;i++) {
		for (int j = 1;j<5;j++) {
			int sum = 0;
			for (int k = 0;k<3;k++) {
				sum += arr[i - 1][j - 1 + k];
			}
			for (int k = 0;k<3;k++) {
				sum += arr[i + 1][j - 1 + k];
			}
			sum += arr[i][j];
			if (sum>max)
				max = sum;
		}
	}
	cout << max;

	return 0;
}
