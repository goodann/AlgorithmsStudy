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
CamelCase���� ù �ܾ��� ù ���ڴ� �ҹ����̴�
�ι�° �ܾ���ʹ� ù���ڰ� �빮���̴�
�ܾ� ���� ����ض�
*/

/*
�빮���� ������ üũ
+1�ؼ� ���
*/

int main() {
	string s;
	cin >> s;

	int cnt = 0;
	for (int i = 0; i<s.size(); i++) {
		if (s[i] <= 'Z') {
			cnt++;
		}
	}
	cout << ++cnt;

	return 0;
}
