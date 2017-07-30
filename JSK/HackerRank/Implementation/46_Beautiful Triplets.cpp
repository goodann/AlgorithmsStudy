#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,d,num,count=0;
    vector<int> numbers;
    cin >> n >> d;
    
    for(int n_i ; n_i < n; n_i++){
        cin >> num;
        numbers.push_back(num);    
    }
    
    for(int i = 0 ; i < n-1 ; i++){
        int cnt =0;
        for(int j = i+1; j < n ; j++){
            if( numbers[j] == numbers[i] + d || numbers[j] == numbers[i] +2*d){
                cnt++;
            }
        }
        if ( cnt == 2){
            count++;
        }
    }
    
    cout<<count;
    
    return 0;
}
