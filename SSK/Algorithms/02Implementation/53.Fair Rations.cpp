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
    int N;
    cin >> N;
    vector<int> B(N);
    for(int B_i = 0;B_i < N;B_i++){
       cin >> B[B_i];
    }
    int count=0;
    bool two=true;
    int sum=0;
    while(two){
        two=false;
        sum=0;
        for(int i=0;i<N;i++){
            if(B[i]%2!=0)
                two=true;
            sum+=B[i];
        }
        if(sum%2!=0){
            cout<<"NO"<<endl;
            return 0;
        }
        for(int i=0;i<N-1;i++){
            if(B[i]%2!=0){
                B[i]++;
                B[i+1]++;
                count+=2;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
