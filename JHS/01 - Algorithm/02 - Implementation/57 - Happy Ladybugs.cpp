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
*/
int main() {
	int Q;
	cin >> Q;
	for (int a0 = 0; a0 < Q; a0++) {
		int n;
		cin >> n;
		string b;
		cin >> b;

		/*
		1. 문자열을 정렬한다.
		2. 앞에서부터 체크하며 다음의 경우 NO를 출력
		2-1. 1개만 있는 색이 있는 경우
		2-2. 빈칸이 없으면서 원본 문자열에서 하나만 있는 색이 있을 경우
		3. 그 외에는 YES를 출력

		*/

		//1
		string s;
		s = b;

		sort(s.begin(), s.end());

		//2-1
		bool flag = true;

		char cur = '*';
		int  cnt = 0;
		for (int s0 = 0; flag == true && s0<s.size(); s0++) {
			if (s[s0] != cur) {
				if (cur != '_' && cnt == 1) {
					flag = false;
				}
				else {
					cur = s[s0];
					cnt = 1;
				}
			}
			else {
				cnt++;
			}
		}
		//마지막 글자가 _이 아니면서 1개일경우
		if (cur != '_' && cnt == 1) {
			flag = false;
		}

		if (flag == false) {
			cout << "NO" << endl;
			continue;
		}

		//2-2
		for (int b0 = 0; flag == true && b0<b.size(); b0++) {
			if (b[b0] != cur) {
				if (cur != '_' && cnt == 1 && s[s.size() - 1] != '_') {
					flag = false;
				}
				else {
					cur = b[b0];
					cnt = 1;
				}
			}
			else {
				cnt++;
			}
		}

		if (flag == false) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}
		/*
		1. 전체 문자열을 입력받는다
		2. 각 색별로 갯수를 체크한다
		3. 다음의 경우 NO를 출력
		3-1 모두 같은색이 아니면서 빈칸이 없는경우
		3-2 1개만 있는 색이 있으면
		4. 그 외에는 YES를 출력한다.

		//1


		//2
		vector<char> colors;
		vector<int> counts;

		colors.push_back('_');
		counts.push_back(0);

		for(int b_i=0; b_i<b.size(); b_i++){
		bool flag = true;
		for(int col_i=0; col_i<colors.size(); col_i++){
		if(b[b_i] == colors[col_i]){
		counts[col_i]++;
		flag = false;
		break;
		}
		}

		if(flag == true){
		colors.push_back(b[b_i]);
		counts.push_back(1);
		}
		}

		//3
		bool flag = true;
		//3-1
		if(colors.size() > 2 && counts[0] == 0){
		flag = false;
		}
		//3-2
		for(int col_i=1; flag == true && col_i<colors.size(); col_i++){
		if(counts[col_i] == 1){
		flag = false;
		}
		}

		if(flag == true){
		//4
		cout << "YES" << endl;
		}else{
		cout << "NO" << endl;
		}
		*/


	}
	return 0;
}
