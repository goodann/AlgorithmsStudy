#include <bits/stdc++.h>

using namespace std;

/*
�������
-�Է�
�׽�Ʈ���̽��� ��
���ڷ� �� 2���� �迭 �ΰ�

-����
�Ʒ� �迭�� ���� �迭�� �� �迭���� ã�� �� �ִ°�

-���
�����ϸ� YES
�Ұ����ϸ� NO
*/
int main() {
	//�Է�==
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

		//����==
		/*
		1. G ù ����� ������ ����� ���ʷ� Ž���Ѵ�.
		2. Ž���ϴ� �� �ȿ��� P ù ���� �߰��ϸ�
		3. P ������ ����� �������� Ž���Ѵ�.
		4. P ������ ����� ���� ã���� ��� YES�� ����ϰ� ����
		5. ã�� ������ ��� 1��
		6. G ������ ����� Ž������ ��� NO�� ���
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
