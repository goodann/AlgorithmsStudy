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
    string S;
    cin >> S;
    int count=0;
    for(int i =0  ; i < S.size()-2;  i+=3 ){
        if(S[i] != 'S'){
            count++;
        }
        if(S[i+1] != 'O'){
            count++;
        }
        if(S[i+2] != 'S'){
            count++;
        }
    }
    cout <<count;
    return 0;
}
