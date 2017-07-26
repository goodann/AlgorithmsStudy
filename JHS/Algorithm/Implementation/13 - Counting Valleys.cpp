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
    
    int level = 0;
    int count =0;
    for(int n_i=0; n_i<n; n_i++){
        char i;
        cin >> i;
        
        switch(i){
            case 'U':
                level++;
                if(level == 0){
                    count++;    
                }
                break;
            case 'D':
                level--;
                break;
        }
    }
    cout << count;
    
    return 0;
}
