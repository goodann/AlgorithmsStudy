#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector < int > keyboards, vector < int > drives, int s){
    // Complete this function
    int max = -1;
    for(int k_i=0; k_i<keyboards.size(); k_i++){
        for(int d_i=0; d_i<drives.size(); d_i++){
            if(keyboards[k_i]+drives[d_i] <= s && keyboards[k_i]+drives[d_i] > max){
                max = keyboards[k_i]+drives[d_i];
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
