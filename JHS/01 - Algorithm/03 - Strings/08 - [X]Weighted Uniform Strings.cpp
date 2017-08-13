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

/*
문제
주어진 문자열에서
같은 문자 연속 합중에(uniform substrings)
주어진 숫자가 나올 수 있는가
*/

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    
    /*
    char a = '*';
    int cnt = 0;
    vector<int> numbers;

    for(int si=0; si<s.size(); si++){
        if(a != s[si]){

            for(int cnti=1; cnti<=cnt;cnti++){
                numbers.push_back((a-'a' + 1) * cnti);
            }

            a = s[si];
            cnt = 1;
        }else{
            cnt++;
        }   
    }
    for(int cnti=1; cnti<=cnt;cnti++){
        numbers.push_back((a-'a' + 1) * cnti);
    }
    */
    
    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin >> x;
        // your code goes here
        
        /*
        bool flag = false;
        for(int ni=0; flag == false && ni<numbers.size(); ni++){
            if(x == numbers[ni]){
                flag = true;
            }
        }
        
        if(flag){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        */
        
        
        vector<char> dividable;
        for(int i=1; i<=26; i++){
            if(x % i == 0){
                dividable.push_back('a'-1+i);
            }
        }
        
        bool flag = false;
        for(int s_i=0; flag == false && s_i<s.size(); s_i++){
            for(int d_i=0; flag == false && d_i<dividable.size(); d_i++){
                if(s[s_i]==dividable[d_i]){
                    
                    int cnt = 1;
                    while(flag == false && s_i < s.size() && s[s_i] == dividable[d_i]){
                        if((dividable[d_i]-'a'+1) * cnt == x){
                            flag = true;
                            break;
                        }else{
                            s_i++;
                            cnt++;
                        }
                    }             
                }
            }
        }
        
        if(flag){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        
        
        
        
        
    }
    return 0;
}
