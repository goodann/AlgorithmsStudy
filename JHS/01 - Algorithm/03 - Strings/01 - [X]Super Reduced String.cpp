#include <bits/stdc++.h>

using namespace std;
/*
문제 요약

인접한 두개의 같은 문자를 삭제
가능한 만큼 반복한 문자열을 출력

*/

/*
i=0 to s.size()
앞에서부터 탐색

s[i] == s[i+1]일경우
s[i]와 s[i+1]을 삭제
i--
다시 탐색;
i>s.size()일경우
s.size()>0이면
s출력
아니면
Empty String출력


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
