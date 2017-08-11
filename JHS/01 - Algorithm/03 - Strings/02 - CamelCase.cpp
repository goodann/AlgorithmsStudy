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

/*
문제요약
CamelCase에서 첫 단어의 첫 글자는 소문자이다
두번째 단어부터는 첫글자가 대문자이다
단어 수를 출력해라
*/

/*
대문자의 갯수를 체크
+1해서 출력
*/

int main() {
	string s;
	cin >> s;

	int cnt = 0;
	for (int i = 0; i<s.size(); i++) {
		if (s[i] <= 'Z') {
			cnt++;
		}
	}
	cout << ++cnt;

	return 0;
}
