#include <bits/stdc++.h>

using namespace std;
/*
�ΰ��� ���ڰ� �����ư��� ������ ���ڿ��� ���� �� �ִ°�

*/

/*
������ ������ ������ ����
�� �߿� �ΰ��� ����
�ΰ��� ������ ��� ���ڸ� ����
����� üũ
������� �� �� �ִ���̸� ���
�Ұ����� ��� 0�� ���
*/
int maxLen(string s) {
	// Complete this function

	int max = 0;

	//������ ������ ������ ����
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

	//�� �߿� �ΰ��� ����.
	if (sav.size() > 1) {
		for (int i = 0; i<sav.size() - 1; i++) {
			for (int j = i + 1; j<sav.size(); j++) {
				string g = s;
				//�ΰ��� ������ ��� ���ڸ� ����        
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
