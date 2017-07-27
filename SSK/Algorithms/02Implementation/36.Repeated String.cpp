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
    long n;
    cin >> n;
    int count=0;
    long long int size=s.size();
    for(int i=0;i<size;i++)
        if(s[i]=='a')
            count++;
    
    long long int result=(n/size)*count;
    for(int i=0;i<n%size;i++){
        if(s[i]=='a')
            result++;
    }
    cout<<result<<endl;
    return 0;
}
