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
    
    int arraySize = a.size();
    int criteria,max = 0,count;
        
    for(int i = 0 ; i < arraySize; i++){
        criteria = a[i];
        count = 0;
        for(int j = 0 ; j < arraySize; j++){
            if( a[j] - criteria <= 1 && a[j] - criteria >= 0){
                count++;
            }
        }
        if( count > max){
            max = count;
        }
    }
    cout << max;
    return 0;
}
