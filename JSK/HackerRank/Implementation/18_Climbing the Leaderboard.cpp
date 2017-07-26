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
    // your code goes here
    int aliceScore,setSize,count;
    set<int>::iterator iter;
    set<int> rank;
        
    for(int i = 0 ; i < n ; i++){   //insert score in set
        rank.insert(scores[i]);
    }

    iter = rank.begin();
    count = 0;

    for (int i = 0 ; i < m ; i++){  //insert alice's score
        aliceScore = alice[i];
        setSize = rank.size();        
        
        while( iter != rank.end()){
            if( *iter > aliceScore){
                break;
            }
            iter++;
            count++;
        }
        cout << setSize - count + 1<< endl;    

    }
    
    
    return 0;
}
