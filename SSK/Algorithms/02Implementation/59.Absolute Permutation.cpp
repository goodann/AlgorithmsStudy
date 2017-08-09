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
#include <unordered_set>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> Permutation;
        set<int> set;
        
        for(int i=1;i<=n;i++){
            int size=set.size();
            if(i-k>=1){
                set.insert(i-k);
                if(size!=set.size()){
                    Permutation.push_back(i-k);
                    continue;
                }
            }
            if(i+k<=n){
                set.insert(i+k);
                if(size!=set.size()){
                    Permutation.push_back(i+k);
                    continue;
                }
            }
            
            if(size==set.size()){
                break;
            }
        }
        if(Permutation.size()==n){
            for(auto i=Permutation.begin();i!=Permutation.end();i++){
                cout<<*i<<" ";
            }
        }else{
            cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}
