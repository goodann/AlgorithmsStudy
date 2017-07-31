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
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        int buyed=n/c;
        int result=n/c;
        while(buyed>=m){
            result++;
            buyed++;
            buyed-=m;
        }
        
        
        cout<<result<<endl;
    }
    return 0;
}
