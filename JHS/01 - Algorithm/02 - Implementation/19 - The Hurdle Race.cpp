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
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
    }
    // your code goes here
    int max_h = 0;
    for(int h_i=0; h_i<n; h_i++){
        if (height[h_i] > max_h){
            max_h = height[h_i];
        }    
    }
    
    int result;
    if(k > max_h){
        result = 0;
    }else{
        result = max_h - k;
    }
    cout << result;
    
    return 0;
}
