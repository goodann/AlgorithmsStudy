#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector < int > keyboards, vector < int > drives, int s){
    // Complete this function
    int keyboardSize = keyboards.size();
    int driveSize = drives.size();
    int max = -1, sum;
    
    
    for(int i = 0 ; i < keyboardSize ; i++){
        
        if( keyboards[i] >= s){
            continue;
        }
        for(int j = 0 ; j < driveSize ; j++){
            if( drives[j] >= s){
                continue;
            }
            
            sum = keyboards[i] + drives[j];
            if( (sum <= s ) && (max <  sum)){
                max = sum;
            }
        }
    }    
    return max;
}

int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    //  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    int moneySpent = getMoneySpent(keyboards, drives, s);
    cout << moneySpent << endl;
    return 0;
}
