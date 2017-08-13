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
    string s;
    cin >> s;
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin >> x;
        // your code goes here
        set<int> num;
        for(int i = 0 ; i < s.size();i++){
            int j;
            for(j = 0; j < s.size(); j++){
                if( s[i+j] != s[i]){
                    break;
                }
            }
            for(int k = 1 ; k <= j ; k++){
                num.insert((s[i] - 'a' + 1) * k);
            }
        }
        int setSize = num.size();
        num.insert(x);
        if( setSize == num.size() ){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    
    
    return 0;
}
