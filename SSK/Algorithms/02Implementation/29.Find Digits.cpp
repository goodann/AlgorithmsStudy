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
        cin >> n;
        int copyN=n;
        int count=0;
        while(copyN!=0){
            int digit=copyN%10;
            if(digit!=0 && n%digit==0)
                count++;
            copyN/=10;
        }
        cout<<count<<endl;
    }
    
    
    return 0;
}
