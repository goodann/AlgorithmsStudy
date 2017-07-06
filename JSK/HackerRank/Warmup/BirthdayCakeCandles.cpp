#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    int tallest=ar[0];
    int count=0;
    for(int i = 1 ; i < ar.size();i++){
        if( tallest < ar[i]){
            tallest=ar[i];
        }
    }
    for(int i = 0 ; i < ar.size();i++){
        if( tallest == ar[i]){
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
