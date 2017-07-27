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
    int q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    vector<int> b;
    b.insert(b.begin(),a.end()-k%n,a.end());
    b.insert(b.end(),a.begin(),a.end()-k%n);
    /*
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
    cout<<endl;
    */
    
    for(int a0 = 0; a0 < q; a0++){
        int m;
        cin >> m;
        cout<<b[m%n]<<endl;
    }
    
    
    return 0;
}
