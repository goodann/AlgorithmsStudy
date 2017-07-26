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
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    
    int a_min = 100;
    int a_max = 0;
    
    for(int a_i=0; a_i<n; a_i++){
        if(a[a_i] > a_max){
            a_max = a[a_i];
        }
        if(a[a_i] < a_min){
            a_min = a[a_i];
        }
    }
    
    vector<int> a_count(a_max - a_min+ 1, 0);
    
    for(int a_i=0; a_i<n; a_i++){
        a_count[a[a_i] - a_min]++;
    }
    
    int max = 0;
    if(a_count.size() > 1){
        for(int ac_i=0; ac_i<a_count.size() - 1; ac_i++){
            if(a_count[ac_i] + a_count[ac_i+1] > max){
                max = a_count[ac_i] + a_count[ac_i+1];
            }
        }   
    }else{
        max = a_count[0];           //배열에 같은 수만 들어있을 경우
    }
    cout << max;
    
    return 0;
}
