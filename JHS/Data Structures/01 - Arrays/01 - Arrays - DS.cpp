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

vector<int> arrayReverse(vector<int> arr) {
	int leng = arr.size();
	vector<int> result(leng);

	for (int i = 0; i<leng; i++) {
		result[i] = arr[leng - 1 - i];
	}

	return result;
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int arr_i = 0; arr_i < n; arr_i++) {
		cin >> arr[arr_i];
	}

	arr = arrayReverse(arr);

	for (int arr_i = 0; arr_i < n; arr_i++) {
		cout << arr[arr_i] << " ";
	}

	return 0;
}