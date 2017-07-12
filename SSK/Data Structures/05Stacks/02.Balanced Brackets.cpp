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
    int t;
    cin >> t;
    string token1= "{[(";
    string token2= "}])";
    
    for(int a0 = 0; a0 < t; a0++){
        bool result=true;
        string s;
        cin >> s;
        stack<int> st;
        int len=s.size();
        for(int i=0;i<len;i++){
            
            size_t x=token1.find(s[i]);
            if(x!=string::npos){
                st.push(x);
            }else{
                size_t x=token2.find(s[i]);
                if(x==string::npos){
                    continue;
                }
                else if(st.empty()){
                    result=false;
                    continue;
                }
                int x2=st.top();
                if(x!=x2){
                    result=false;
                    break;
                }else{
                    st.pop();
                }
            }
            
        }
        if(result && st.empty())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
