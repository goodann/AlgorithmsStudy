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
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        cin >> n;
        vector< vector<int> > M(n,vector<int>(n));
        for(int M_i = 0;M_i < n;M_i++){
           for(int M_j = 0;M_j < n;M_j++){
              cin >> M[M_i][M_j];
           }
        }
        // your code goes here
        int flag = 0;
        vector<long> swapCount(n);
        for(int container = 0 ; container< n; container++){
            for(int type = 0 ; type < n; type++){
                if( container != type){
                    swapCount[container] += M[container][type];
                }
                if( M[container][container] != M[type][type]){
                    flag=1;
                }                
            }
        }
        for(int i = 0 ; i < swapCount.size()-1;i++){
            if( flag == 1){
                break;
            }
            for(int j = i+1 ; j < swapCount.size();j++){
                if( swapCount[i] != swapCount[j]){
                    flag =1;
                    break;
                }    
            }
        }
        if (!flag){
            cout<<"Possible"<<endl;
        }
        else{
            cout<<"Impossible"<<endl;
        }
    }
    return 0;
}
