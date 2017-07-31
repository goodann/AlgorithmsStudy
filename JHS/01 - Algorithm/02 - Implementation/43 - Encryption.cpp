#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include <string>

int main() {
	string s;
	cin >> s;


	int rows;							//세로줄 수
	int columns;						//가로줄 수

	int sq = sqrt(s.size());
	if (pow(sq, 2) == s.size()) {
		rows = sq;
		columns = sq;
	}
	else {
		if (sq *(sq + 1) < s.size()) {
			rows = sq + 1;
			columns = sq + 1;
		}
		else {
			rows = sq;
			columns = sq + 1;
		}
	}

	vector<string> row(columns);		//원본을 글자수로 나눌 vector
	for (int r_i = 0; r_i<rows; r_i++) {
		row[r_i] = s.substr(r_i*columns, ((r_i + 1) * columns <= s.size() ? columns : s.size() % columns));
	}

	vector<string> col(columns);		//글자를 암호화 해서 넣을 vector
	for (int c_i = 0; c_i<columns; c_i++) {
		string s = "";
		for (int r_i = 0; r_i<rows; r_i++) {
			if (row[r_i].size() > c_i) {
				s += row[r_i][c_i];
			}
		}
		col[c_i] = s;
	}

	for (int c_i = 0; c_i<col.size(); c_i++) {
		cout << col[c_i] << " ";
	}

	return 0;
}
