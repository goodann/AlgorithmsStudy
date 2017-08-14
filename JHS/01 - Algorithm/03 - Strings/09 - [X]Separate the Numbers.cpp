#include <bits/stdc++.h>

using namespace std;

int main() {
	int q;
	cin >> q;
	for (int a0 = 0; a0 < q; a0++) {
		string s;
		cin >> s;
		// your code goes here

		for (int s_i = 1; s_i <= s.size() / 2; s_i++) {

			int bNum = 0;
			int aNum = 0;
			int d = 0;
			string a = "";

			for (int s_a = 0; s_a < s_i; s_a++) {
				a += s[d];
				d++;
			}
			bNum = atoi(a.c_str());
			a = "";

			bool flag = false;
			while (flag == false) {
				for (int s_a; flag == false && s_a < s_i; s_a++) {
					if (d < s.size()) {
						a += s[d];
						d++;
					}
					else {
						flag = true;
						break;
					}
				}
				aNum = atoi(a.c_str());
				a = "";

				if (aNum - bNum == 1) {

				}
				else {
					a = "asdf";
					flag = false;
				}
			}
			if (a.size() > 0) {
				cout << "No" << endl;
			}
			else {
				a = "";
				d = 0;
				for (int s_a = 0; s_a < s_i; s_a++) {
					a += s[d];
					d++;
				}
				cout << "Yes " << a << endl;
			}

		}




	}
	return 0;
}
