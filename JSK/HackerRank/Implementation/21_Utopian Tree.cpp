#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    int height;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        height = 1;
        int n;
        cin >> n;
        
        for(int i = 0 ; i < n ; i++){
            if( i % 2 == 0){
                height *= 2;
            }
            else{
                height++;
            }
        }
        
        cout<<height<<endl;
    }
    return 0;
}
