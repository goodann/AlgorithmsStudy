#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0;width_i < n;width_i++){
       cin >> width[width_i];
    }
    for(int a0 = 0; a0 < t; a0++){
        int i;
        int j;
        cin >> i >> j;
        
        int min = 4;
        for(int repeat = i ; repeat <= j ; repeat++ ){
            if( width[repeat] < min){
                min = width[repeat];
            }
        }
        switch ( min){
            case 1: cout<<1<<endl; break;
            case 2: cout<<2<<endl; break;
            case 3: cout<<3<<endl; break;
        }
    }
    return 0;
}
