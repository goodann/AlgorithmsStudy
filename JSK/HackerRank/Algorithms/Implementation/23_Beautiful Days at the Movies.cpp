#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int reversed(int num){
    int digit, result = 0;
    vector<int> reversedNum;
    while( num / 10  != 0 ){
        reversedNum.push_back(num % 10);
        num /= 10;
    }
    reversedNum.push_back(num);
    digit = reversedNum.size();    
    
    for(int i = 0 ; i < digit ; i++){
        result += reversedNum[i] * pow(10,digit-i-1);
    }
    
    return result;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int i,j,k;
    
    cin >> i >> j >> k;
    
    int count = 0;
    for(int q = i ; q <= j ; q++){
        if( !(abs(q - reversed(q)) % k)  ) {
            count++;
        }
    }
    cout<<count;
    
    return 0;
}
