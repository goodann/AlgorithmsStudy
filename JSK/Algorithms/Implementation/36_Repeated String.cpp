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
    string s;
    cin >> s;
    long n;
    cin >> n;
    
    int AInString = 0;
    int stringSize = s.size();
    long result = 0;
    for(int i =0 ; i < stringSize ; i++){
        if( s[i] == 'a'){
            AInString++;
        }
    }
    
    result = (n / stringSize) * AInString;
    
    for(long i = 0 ; i < n % stringSize ; i++){
        if( s[i] == 'a'){
            result++;
        }
    }
    cout<<result;
    
    return 0;
}
