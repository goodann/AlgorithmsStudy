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
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int arr_i = 0;arr_i < n;arr_i++) {
		cin >> arr[arr_i];
	}
	for (int i = 0;i<n / 2;i++) {
		int temp = arr[i];
		arr[i] = arr[n - (i + 1)];
		arr[n - (i + 1)] = temp;
	}
	for (int i = 0;i<n;i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
