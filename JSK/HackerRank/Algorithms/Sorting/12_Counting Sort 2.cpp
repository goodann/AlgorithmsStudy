#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N ,num;
    cin >> N;
    vector<int> numbers(100);
    
    for(int i = 0 ; i < N ; i++){
        cin>> num;
        numbers[num]++;
    }
    for(int i = 0 ; i< 100; i++){
        for(int j = 0 ; j < numbers[i]; j++ )
            cout<<i<<" ";
    }
    
    
    
    return 0;
}
