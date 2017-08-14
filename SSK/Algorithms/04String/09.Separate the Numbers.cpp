#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin >> q;
	for (int a0 = 0; a0 < q; a0++) {
		string s;
		cin >> s;
		// your code goes here
		long start = 0;
		bool isBeautiful = false;
		if (s[0] == '0' || s.size() <= 1)
			isBeautiful = false;
		else {
			for (long i = 1;i <= s.size() / 2 && !isBeautiful;i++) {
				long k = i;
				long a = stol(s.substr(0, i));
				long b = stol(s.substr(i, k));
				if ((a + 1) / (long)pow(10,i) == 1 )
					b = stol(s.substr(i, ++k));
				long j = i + k;

				
				while (b - a == 1 && j<s.size() - 1) {
                    //cout<<b<<"-"<<a<<endl;
					a = b;
					if ((b + 1) / (long)pow(10,i) == 1 && (b + 1) % (long)pow(10,i) == 0)
						b = stol(s.substr(j, ++k));
					else
						b = stol(s.substr(j, k));
					j += k;

				}
				if (j >= s.size() - 1 && b - a == 1) {
					isBeautiful = true;
					start = stol(s.substr(0, i));
				}
				//cout<<"j=="<<j<<endl;

			}
		}
		if (isBeautiful)
			cout << "YES " << start << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

