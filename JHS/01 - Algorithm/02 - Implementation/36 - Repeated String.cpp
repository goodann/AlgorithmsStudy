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
	string s;
	cin >> s;
	long n;
	cin >> n;

	long counta = 0;
	if (n > s.size()) {
		counta = count(s.begin(), s.end(), 'a');
		counta *= n / s.size();
	}

	string ssub = s.substr(0, n % s.size());
	counta += count(ssub.begin(), ssub.end(), 'a');

	cout << counta;

	return 0;
}
