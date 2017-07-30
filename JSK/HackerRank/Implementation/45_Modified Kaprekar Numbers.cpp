#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int p,q;
    cin >>q >>p;
    
    long  squareNumber,dNumber, lNumber;
    int digit, d, l;
    int flag=1;
    for(long i = q; i <= p ;i++){
        squareNumber = i*i;
        digit=0;
        
        long  tmp=squareNumber;
        while( tmp != 0){
            tmp = tmp/10;
            digit++;
        }
        d = digit / 2;
        l = digit - d;
        
        dNumber = squareNumber / pow(10,l);
        lNumber = squareNumber % (int)pow(10,l);
        
        if( (dNumber + lNumber) == i){
            flag=0;
            cout<<i<<" ";
        }
    }
    if(flag){
        cout<<"INVALID RANGE";
    }
    
    return 0;
}
