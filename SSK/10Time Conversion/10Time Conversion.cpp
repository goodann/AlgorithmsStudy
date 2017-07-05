// 10Time Conversion.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>

using namespace std;

string timeConversion(string s) {
	int token = s.find(":");
	int hh = stoi(s.substr(0, token));
	int len = s.length();
	string result;
	if (s.find("PM") != string::npos && hh != 12) {
		hh += 12;
		result += to_string(hh);
		result += s.substr(token, len - (2 + token));


	}
	else {
		if (s.find("AM") != string::npos && hh == 12) {
			result += "00";
			result += s.substr(token, len - (2 + token));
		}
		else
			result += s.substr(0, len - 2);
	}

	return result;
	// Complete this function
}

int main() {
	string s;
	cin >> s;
	string result = timeConversion(s);
	cout << result << endl;
	return 0;
}
