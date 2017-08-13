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
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    getline(cin,s);
    
    const int ALPHABET = 26;
    int arr[ALPHABET] = {0};
    int strSize = s.size();
    for(int i = 0 ; i < strSize;i++){
        if ( s[i] >= 'A' && s[i] <= 'Z'){
            arr[s[i]- 'A'] = 1;
        }
        else if (s[i] >= 'a' && s[i] <= 'z'){
            arr[s[i]- 'a'] = 1;
        }
    }
    
    bool isProgram = false;
    for(int i = 0 ; i < ALPHABET; i++){
        if( !arr[i]){
            isProgram=true;
            break;
        }
    }
    if( isProgram){
        cout<<"not pangram";
    }
    else{
        cout<<"pangram";
    }
    
    return 0;
}
