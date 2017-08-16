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
    string t;
    cin >> t;
    int k;
    cin >> k;
    
    int sameString, sSize, tSize, erase, append;
    int i, succeed = 1;
    
    
    sSize = s.size();
    tSize = t.size();
    
    for(i  = 0 ; i < sSize && i < tSize ; i++){
        if( s[i] != t[i]){
            break;
        }
    }
    erase = sSize - i;
    if( i == sSize && k > sSize) {
        if( k - sSize > tSize){
            cout<<"Yes";
            succeed=0;
        }
    }
    else if( i == 0){
        if( k - erase >= tSize){
            cout<<"Yes";
            succeed=0;
        }
    }
    else if( i == sSize){
        if( k  % 2 == 0 ){
            cout<<"Yes";
            succeed = 0;
        }
    }
    else if( i == tSize){
        if( k - erase >= tSize){
            cout<<"Yes";
            succeed = 0;
        }
        else if( (k -erase) % 2 == 0 ){
            cout<<"Yes";
            succeed = 0;
        }   
    }
    else if (k - erase == tSize - i){
        cout <<"Yes";
        succeed = 0;
    }
    
    if( succeed){
        cout<<"No";
    }
    return 0;
}
