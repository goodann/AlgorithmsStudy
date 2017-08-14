#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

/*
�������
���� ���� �ΰ��� �̻� �ٿ����� �� �ִ°�
*/
int main() {
	int Q;
	cin >> Q;
	for (int a0 = 0; a0 < Q; a0++) {
		int n;
		cin >> n;
		string b;
		cin >> b;

		/*
		1. ���ڿ��� �����Ѵ�.
		2. �տ������� üũ�ϸ� ������ ��� NO�� ���
		2-1. 1���� �ִ� ���� �ִ� ���
		2-2. ��ĭ�� �����鼭 ���� ���ڿ����� �ϳ��� �ִ� ���� ���� ���
		3. �� �ܿ��� YES�� ���

		*/

		//1
		string s;
		s = b;

		sort(s.begin(), s.end());

		//2-1
		bool flag = true;

		char cur = '*';
		int  cnt = 0;
		for (int s0 = 0; flag == true && s0<s.size(); s0++) {
			if (s[s0] != cur) {
				if (cur != '_' && cnt == 1) {
					flag = false;
				}
				else {
					cur = s[s0];
					cnt = 1;
				}
			}
			else {
				cnt++;
			}
		}
		//������ ���ڰ� _�� �ƴϸ鼭 1���ϰ��
		if (cur != '_' && cnt == 1) {
			flag = false;
		}

		if (flag == false) {
			cout << "NO" << endl;
			continue;
		}

		//2-2
		for (int b0 = 0; flag == true && b0<b.size(); b0++) {
			if (b[b0] != cur) {
				if (cur != '_' && cnt == 1 && s[s.size() - 1] != '_') {
					flag = false;
				}
				else {
					cur = b[b0];
					cnt = 1;
				}
			}
			else {
				cnt++;
			}
		}

		if (flag == false) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}
		/*
		1. ��ü ���ڿ��� �Է¹޴´�
		2. �� ������ ������ üũ�Ѵ�
		3. ������ ��� NO�� ���
		3-1 ��� �������� �ƴϸ鼭 ��ĭ�� ���°��
		3-2 1���� �ִ� ���� ������
		4. �� �ܿ��� YES�� ����Ѵ�.

		//1


		//2
		vector<char> colors;
		vector<int> counts;

		colors.push_back('_');
		counts.push_back(0);

		for(int b_i=0; b_i<b.size(); b_i++){
		bool flag = true;
		for(int col_i=0; col_i<colors.size(); col_i++){
		if(b[b_i] == colors[col_i]){
		counts[col_i]++;
		flag = false;
		break;
		}
		}

		if(flag == true){
		colors.push_back(b[b_i]);
		counts.push_back(1);
		}
		}

		//3
		bool flag = true;
		//3-1
		if(colors.size() > 2 && counts[0] == 0){
		flag = false;
		}
		//3-2
		for(int col_i=1; flag == true && col_i<colors.size(); col_i++){
		if(counts[col_i] == 1){
		flag = false;
		}
		}

		if(flag == true){
		//4
		cout << "YES" << endl;
		}else{
		cout << "NO" << endl;
		}
		*/


	}
	return 0;
}
