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
int main() {
    vector<int> count(26);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z')
            count[str[i]-'a']++;
        if(str[i]>='A' && str[i]<='Z')
            count[str[i]-'A']++;
    }
    bool isPangram=true;
    for(int i=0;i<26;i++){
        //cout<<(char)(i+'a')<<count[i]<<" ";
        if(count[i]==0){
            isPangram=false;
            break;
        }
    }
    if(isPangram)
        cout<<"pangram"<<endl;
    else
        cout<<"not pangram"<<endl;
    return 0;
}
