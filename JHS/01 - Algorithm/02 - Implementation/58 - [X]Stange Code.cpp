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
문제 요약
t=1일때 3을 출력함
t가 1 증가할 때마다 출력값은 1 감소한다.
출력값이 1보다 작아질 경우 이전 최대값의 두배가 된다. (3 - 6 - 12)

t를 입력받았을 때 그 출력값을 구해라.
*/

/*
변수 a를 생성
a=1부터 증가한다
t = (t - 3 * pow(2,a)) 반복 실행하며 t < 0 이 되는 a값을 구한다.
t에서 마지막으로 뺀 값을 더하고 a에서 1을 뺀다.


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
