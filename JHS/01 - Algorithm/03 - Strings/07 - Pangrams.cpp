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
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     
    
    string s;
    string t;
    cin >> t;
    
    string a = "";
    do{
        for(int ti=0; ti<t.size(); ti++){
            if(t[ti] < 'a'){
                t[ti] = t[ti] + ('a'-'A');
            }

            bool flag = true;
            for(int ai=0; ai<a.size(); ai++){
                if(t[ti] == a[ai]){
                    flag = false;
                }
            }
            if(flag){
                a += t[ti];
            }
        }
        s = t;
        cin >> t;
    }while(s.compare(t) != 0);
    
    
    if(a.size() == 26){
        cout << "pangram" << endl;
    }else{
        cout << "not pangram" << endl;
    }
    
    return 0;
}
