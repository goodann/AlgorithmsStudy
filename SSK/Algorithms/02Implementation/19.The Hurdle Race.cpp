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
    int k;
    cin >> n >> k;
    vector<int> height(n);
    int max=0;
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
        if(max<height[height_i])
            max=height[height_i];
    }
    
    cout<<((max-k)>0?max-k:0);
    // your code goes here
    return 0;
}
