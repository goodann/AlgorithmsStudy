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


int main(){
    long long int t;
    cin >> t;
    long long int value=3;
    long long int count=1;
    while(count+value<=t){
        count+=value;
        value*=2;
    }
    while(count<t){
        value--;
        count++;
    }
    cout<<value<<endl;
    return 0;
}
