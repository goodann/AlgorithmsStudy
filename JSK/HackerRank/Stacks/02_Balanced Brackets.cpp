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
    int t, flag;
    vector<char> stack;
    char closeBracket;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        stack.clear();
        flag=1;
        
        for(int i = 0 ; i < s.size(); i++){
            if (s[i] == '[' || s[i] == '{' || s[i] == '('){
                stack.push_back(s[i]);    
            }
            else{
                if( stack.size() ==0){
                    cout<<"NO"<<endl;
                    flag=0;
                    break;
                }       
                if( s[i] == ')'){
                    if( stack[stack.size()-1] == '('){
                        stack.pop_back();
                    }
                    else{    
                        cout<<"NO"<<endl;
                        flag=0;
                        break;     
                    }
                }
                else if(s[i] =='}'){

                    if( stack[stack.size()-1] == '{'){
                        stack.pop_back();
                    }
                    else{    
                        cout<<"NO"<<endl;
                        flag=0;
                        break;     
                    }
                }
                else{
                    if( stack[stack.size()-1] == '['){
                        stack.pop_back();
                    }
                    else{    
                        cout<<"NO"<<endl;
                        flag=0;
                        break;     
                    }
                }
            }

        }
        if( flag ==1){
            if( stack.size() ==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }    
        }
        
    }
    return 0;
}
