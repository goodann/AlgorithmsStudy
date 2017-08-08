#include <bits/stdc++.h>

using namespace std;

/*
문제요약
-입력
테스트케이스의 수
숫자로 된 2차원 배열 두개

-조건
아랫 배열과 같은 배열을 윗 배열에서 찾을 수 있는가

-출력
가능하면 YES
불가능하면 NO
*/
int main() {
	//입력==
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		int R;
		int C;
		cin >> R >> C;
		vector<string> G(R);
		for (int G_i = 0; G_i < R; G_i++) {
			cin >> G[G_i];
		}
		int r;
		int c;
		cin >> r >> c;
		vector<string> P(r);
		for (int P_i = 0; P_i < r; P_i++) {
			cin >> P[P_i];
		}

		//연산==
		/*
		1. G 첫 행부터 마지막 행까지 차례로 탐색한다.
		2. 탐색하는 행 안에서 P 첫 행을 발견하면
		3. P 마지막 행까지 연속으로 탐색한다.
		4. P 마지막 행까지 전부 찾았을 경우 YES를 출력하고 종료
		5. 찾지 못했을 경우 1로
		6. G 마지막 행까지 탐색했을 경우 NO를 출력
		*/

		bool flag = true;
		//1
		for (int G_i = 0; flag == true && G_i<G.size(); G_i++) {
			int ping = G[G_i].find(P[0]);
			//2
			if (ping != string::npos) {
				//3
				for (int P_i = 0; flag == true && P_i<P.size(); P_i++) {
					if (G_i + P_i < G.size()) {
						int ping1 = G[G_i + P_i].find(P[P_i]);
						if (ping != ping1) {
							//5
							flag = false;
						}
					}
					else {
						flag = false;
					}
				}
				//4
				if (flag == true) {
					cout << "YES" << endl;
					flag = false;
				}
				else {
					flag = true;
				}
			}


			if (G_i == G.size() - 1) {
				//6
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}
