#include <bits/stdc++.h>

using namespace std;
/*
���� ���

������ �ΰ��� ���� ���ڸ� ����
������ ��ŭ �ݺ��� ���ڿ��� ���

*/

/*
i=0 to s.size()
�տ������� Ž��

s[i] == s[i+1]�ϰ��
s[i]�� s[i+1]�� ����
i--
�ٽ� Ž��;
i>s.size()�ϰ��
s.size()>0�̸�
s���
�ƴϸ�
Empty String���


*/

string super_reduced_string(string s) {
	// Complete this function
	for (int i = 0; i < s.size() - 1; i++) {
		if (s.size() > 1 && s[i] == s[i + 1]) {
			s.erase(s.begin() + i);
			s.erase(s.begin() + i);
			i -= 2;
			if (i<0) {
				i = -1;
			}
		}
	}

	if (s.size() > 0) {
		return s;
	}
	else {
		return "Empty String";
	}
}

int main() {
	string s;
	cin >> s;
	string result = super_reduced_string(s);
	cout << result << endl;
	return 0;
}
