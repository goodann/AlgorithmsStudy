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
    int n;
    vector<int> p;
    
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        int num;
        cin >> num;
        p.push_back(num);
    }
    for(int i = 1 ; i <= n ; i++){
        int px;
        for(int j = 0 ; j < n ; j++){
            if( i == p[j] ){
                px = j+1;    
            }
        }
        for(int j = 0 ; j < n ; j++){
            if( px == p[j] ){
                cout<<j+1<<endl;
            }
        }
        
    }
    
    return 0;
}
