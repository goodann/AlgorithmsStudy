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
    int n;
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0;c_i < m;c_i++){
       cin >> c[c_i];
    }
    
    sort(c.begin(),c.end());
    int flag=0;
    if( c[m-1] !=  n-1){
        c.push_back(n-1);
        flag=1;
    }
    
    if( c[0] != 0){
        c.insert(c.begin(),0);
        flag=1;
    }
    
    int max=0;
    for(int i = 0 ; i < c.size() -1 ; i++){
        int diff= c[i+1] - c[i];
        
        if( flag && (i == c.size()-2 ||  i == 0)){
            if ( max < diff ){
                max = diff;
            }
        }
        else if ( max < diff/2 ){
                max = diff/2;
        }
    }

    cout <<max;
    return 0;
}
