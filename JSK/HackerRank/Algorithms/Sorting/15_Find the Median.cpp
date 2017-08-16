#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> numbers;
    int N,num;
    cin >> N;
    
    for(int i = 0 ; i <  N; i++){
        cin >>num;
        numbers.push_back(num);
    }
    
    sort(numbers.begin(),numbers.end());
    
    cout<<numbers[N/2];
    
    return 0;
}
