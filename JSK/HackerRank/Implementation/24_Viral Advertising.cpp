#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    int start = 5;
    int liked = 0;
    
    for(int day = 1;  day <= n; day++){
        liked += floor(start/2);
        start = floor(start/2) * 3 ;
    }
    cout<< liked;
    return 0;
}
