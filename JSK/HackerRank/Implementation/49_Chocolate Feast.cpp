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
        
        int chocolate=n / c;
        int changedChocolate=0;
        int wrapped =0;
        wrapped =chocolate;
        while( wrapped >= m ){
            chocolate += wrapped / m;
            wrapped = wrapped %m + wrapped/m;
            
        }
        cout<<chocolate<<endl;
    }
    return 0;
}
