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
    int a_s = 0;
    
    for(int alice_i=0; alice_i<m; alice_i++){
        a_s += alice[alice_i];
        
        int rank = 1;
        int s_i=0;
        bool flag = true;
        while(flag){
            if(s_i >= scores.size()){
                flag = false;
                rank++;
            }else if(scores[s_i] < a_s){
                if(s_i > 0){
                    rank++;
                }
                flag = false;
            }else{
                
                if(s_i>0){
                    if(scores[s_i] < scores[s_i - 1]){
                        rank++; 
                    }   
                }
            }
            s_i++;
        }
        cout << rank << endl;
        
    }
    
    return 0;
}
