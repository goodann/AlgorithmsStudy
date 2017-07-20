#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    for(int a0 = 0; a0 < t; a0++){
        vector<int> digits;
        int n,num,count=0;
        cin >> n;
        
        num = n;
        while( num != 0 ){
            digits.push_back( num % 10);
            num /= 10;
        }
        
        int digitSize = digits.size();
        for(int i =0; i < digitSize ; i++){
            if (digits[i] == 0){
                continue;
            }
            if( n % digits[i] == 0 ){
                count++;
            }
        }
        cout << count<<endl;
    }
    return 0;
}
