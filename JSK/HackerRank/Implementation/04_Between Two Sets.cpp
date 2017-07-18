#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector < int > a, vector < int > b){
    // Complete this function
    int maxA = a.back(),minB = b.front();
    int countA,countB,total = 0;
    
    for(int i = maxA;  i <= minB ; i++){
        countA=0;
        countB=0;
        
        for(int j = 0 ; j < a.size() ;j++){
            if( i % a[j] !=0){
                break;
            }
            countA++;
        }
        
        for(int j = 0 ; j < b.size() ;j++){
            if( b[j] % i !=0){
                break;
            }
            countB++;
        }
        
        if( countA == a.size() && countB == b.size()){
            total++;
        }
    }
    
    return total;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}
