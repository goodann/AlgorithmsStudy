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
같은 색을 두가지 이상 붙여놓을 수 있는가


1. 전체 문자열을 입력받는다
2. 각 색별로 갯수를 체크한다
3. 다음의 경우 NO를 출력
3-1 모두 같은색이 아니면서 빈칸이 없는경우
3-2 1개만 있는 색이 있으면
4. 그 외에는 YES를 출력한다.
*/
int main() {
	int Q;
	cin >> Q;
	for (int a0 = 0; a0 < Q; a0++) {
		int n;
		cin >> n;
		string b;
		cin >> b;
		//1


		//2
		vector<char> colors;
		vector<int> counts;

		colors.push_back('_');
		counts.push_back(0);

		for (int b_i = 0; b_i<b.size(); b_i++) {
			bool flag = true;
			for (int col_i = 0; col_i<colors.size(); col_i++) {
				if (b[b_i] == colors[col_i]) {
					counts[col_i]++;
					flag = false;
					break;
				}
			}

			if (flag == true) {
				colors.push_back(b[b_i]);
				counts.push_back(1);
			}
		}

		//3
		bool flag = true;
		//3-1
		if (colors.size() > 2 && counts[0] == 0) {
			flag = false;
		}
		//3-2
		for (int col_i = 1; flag == true && col_i<colors.size(); col_i++) {
			if (counts[col_i] == 1) {
				flag = false;
			}
		}

		if (flag == true) {
			//4
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}


	}
	return 0;
}
