#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,level = 0,stringSize,count = 0; 
    string str;
    
    cin >> N;
    cin >> str;
    
    stringSize = str.size();
    for(int i = 0 ;  i < stringSize ; i++){
        if( str[i] == 'U'){
            level++;
            if( level == 0){
                count++;
            }
        }
        else if ( str[i] == 'D'){
            level--;
        }
    }
    cout << count;
    
    return 0;
}
