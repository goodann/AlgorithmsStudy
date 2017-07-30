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

long solve(long b, long w, long x, long y, long z){
    
    long cost;
    if( x > y+z){
        cost = b*(y+z) + w*y;
    }
    else if ( x + z < y){
        cost = b*x + w*(x+z);
    }
    else{
        cost = b*x +  w *y;
    }
    return cost;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long b;
        long w;
        cin >> b >> w;
        long x;
        long y;
        long z;
        cin >> x >> y >> z;
        
        cout<<solve(b,w,x,y,z)<<endl;
    }
    return 0;
}
