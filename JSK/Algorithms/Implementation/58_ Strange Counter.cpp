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
    long long t;
    cin >> t;
    
    long long value = 3;
    long long time = 1;
    long long prevTime =1; 
    while( t >= time+value){
        time = time+value;
        value = value*2;
        prevTime =time;

    }
    while( t != value){
        value--;
        prevTime++;
    }
    cout<<prevTime;
    return 0;
}
