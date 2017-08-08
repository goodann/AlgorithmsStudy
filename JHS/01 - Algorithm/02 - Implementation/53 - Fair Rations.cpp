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

-전제
N개의 임의의 배열을 입력받는다.
붙어있는 두 수에 1씩 더할 수 있다.

-조건
모든 수를 짝수로 만들 수 있는가

-출력
가능하다면 그 때 더한 수의 최소값을 구해라
불가능하다면 NO를 출력하다

*/
int main() {
	//입력==
	int N;
	cin >> N;
	vector<int> B(N);
	for (int B_i = 0; B_i < N; B_i++) {
		cin >> B[B_i];
	}

	//연산==
	int count = 0;                      //더한 수의 합

	for (int B_i = 0; B_i<N; B_i++) {
		if (B[B_i] % 2 != 0) {            //첫 수부터 차례대로 탐색하며 홀수일 경우 그 수와 그 다음수에 1씩 더한다.
			if (B_i + 1 == N) {           //홀수인 수가 마지막 수일경우 NO를 출력한다.
				cout << "NO";
				return 0;
			}
			B[B_i]++;
			B[B_i + 1]++;
			count += 2;
		}
	}

	//출력==
	cout << count;

	return 0;
}
