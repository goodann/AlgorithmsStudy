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
���� ���
t=1�϶� 3�� �����
t�� 1 ������ ������ ��°��� 1 �����Ѵ�.
��°��� 1���� �۾��� ��� ���� �ִ밪�� �ι谡 �ȴ�. (3 - 6 - 12)

t�� �Է¹޾��� �� �� ��°��� ���ض�.
*/

/*
���� a�� ����
a=1���� �����Ѵ�
t = (t - 3 * pow(2,a)) �ݺ� �����ϸ� t < 0 �� �Ǵ� a���� ���Ѵ�.
t���� ���������� �� ���� ���ϰ� a���� 1�� ����.


*/
int main() {
	int t;
	cin >> t;

	int a = 0;
	cout << t << ", " << a << endl;
	do {
		t -= 3 * (pow(2, a++));
	} while (t > 0);

	t += 3 * (pow(2, --a));

	cout << 3 * pow(2, a) - t + 1;

	return 0;
}
