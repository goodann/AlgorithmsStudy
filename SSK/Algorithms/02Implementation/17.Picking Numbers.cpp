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
    vector<int> count(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
        count[a[a_i]-1]++;
        
    }
    
    int max=-1;
    
    for(int i=0;i<n-1;i++){
        int sum;
        sum = count[i]+count[i+1];
        
        if(sum>max)
            max=sum;
    }
    
    cout<<max;
    return 0;
}
