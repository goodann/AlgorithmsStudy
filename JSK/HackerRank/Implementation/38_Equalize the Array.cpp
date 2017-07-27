#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> num(101);
    int N,a;
    
    cin >> N;
    
    for(int i = 0 ; i < N; i++){
        cin >> a;
        num[a+1]++;
    }
    int max=-1;
    for(int i = 1 ; i < num.size(); i++){
        if ( num[i] > max){
            max = num[i];
        }
    }
    
    cout<< N - max;
    
    
    
    return 0;
}
