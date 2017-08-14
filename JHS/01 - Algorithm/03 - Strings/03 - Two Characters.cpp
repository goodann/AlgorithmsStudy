#include <bits/stdc++.h>

using namespace std;
/*
두개의 문자가 번갈아가며 나오는 문자열로 만들 수 있는가

*/

/*
나오는 문자의 종류를 저장
그 중에 두개를 고른다
두개를 제외한 모든 문자를 삭제
결과를 체크
맞을경우 그 중 최대길이를 출력
불가능할 경우 0을 출력
*/
int maxLen(string s) {
	// Complete this function

	int max = 0;

	//나오는 문자의 종류를 저장
	string sav = "";
	for (int i = 0; i<s.size(); i++) {
		bool isExist = false;
		for (int j = 0; j<sav.size(); j++) {
			if (s[i] == sav[j]) {
				isExist = true;
			}
		}
		if (isExist == false) {
			sav = sav + s[i];
		}
	}

	//그 중에 두개를 고른다.
	if (sav.size() > 1) {
		for (int i = 0; i<sav.size() - 1; i++) {
			for (int j = i + 1; j<sav.size(); j++) {
				string g = s;
				//두개를 제외한 모든 문자를 삭제        
				for (int k = 0; k<g.size(); k++) {
					if (g[k] != sav[i] && g[k] != sav[j]) {
						g.erase(g.begin() + k);
						k--;
					}
				}

				bool flag = false;
				for (int k = 0; k<g.size() - 1; k++) {
					if (g[k] == g[k + 1]) {
						flag = true;
					}
				}
				if (flag == false) {
					if (max < g.size()) {
						max = g.size();
					}
				}

			}
		}
	}

	return max;
}

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int result = maxLen(s);
	cout << result << endl;
	return 0;
}
