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
    string t;
    cin >> t;
    int k;
    cin >> k;
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i]){
            s[i]=1;
        }
    }
    int first=s.find(1);
    int sSize=s.size();
    int tSize=t.size();
    if(first== string::npos)
        first=sSize;
    int dif=k-((sSize-first)+(tSize-first));
    if(dif>=0 && dif%2==0 || k>sSize+tSize){
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
    
    return 0;
}
