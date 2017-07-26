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
    vector<int> scores(n);
    for(int scores_i = 0;scores_i < n;scores_i++){
       cin >> scores[scores_i];
    }
    int m;
    cin >> m;
    vector<int> alice(m);
    for(int alice_i = 0;alice_i < m;alice_i++){
       cin >> alice[alice_i];
    }
    set<int> scoresSet;
    
    for(int i=0;i<n;i++){
        scoresSet.insert(scores[i]);
    }
    auto iterator=scoresSet.begin();
    int j=0;
    for(int i=0;i<m;i++){
        
        while(iterator!=scoresSet.end()){
            if(*iterator>alice[i]){
                break;
            }
            iterator++;
            j++;
        }
        cout<<scoresSet.size()-j+1<<endl;
    }
    // your code goes here
    return 0;
}
