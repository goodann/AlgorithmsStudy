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
문제 요약

-입력
도시의 수와 space station이 있는 도시의 번호를 입력받는다

-출력
가장 가까운 space stations까지의 거리가 가장 긴 도시를 찾고
그 도시에서 가장 가까운 space stations까지의 거리를 출력한다
*/

int main() {

	//입력==
	int n;
	int m;
	cin >> n >> m;
	vector<int> c(m);
	for (int c_i = 0; c_i < m; c_i++) {
		cin >> c[c_i];
	}

	//연산==
	int max = 0;                            //최대 거리를 저장할 변수

	for (int i = 0; i<n; i++) {
		int min = n;                        //최소 거리를 저장할 변수
		for (int c_i = 0; c_i<m; c_i++) {       //모든 도시를 탐색
			if (abs(i - c[c_i]) < min) {      //현재 도시에서 가장 가까운 space station까지의 거리를 계산
				min = abs(i - c[c_i]);
			}
		}
		if (min > max) {
			max = min;                      //최대이면 저장
		}
	}

	//출력==
	cout << max;

	return 0;
}
