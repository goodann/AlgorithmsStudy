#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, vector <int> ar) {
    // Complete this function
    int arraySize=ar.size();
    int sum,count = 0;
    for(int i = 0 ; i < arraySize - 1 ; i++){
        for(int j = i+1; j < arraySize ; j++){
            sum = ar[i] + ar[j]; 
            if( sum % k == 0){
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = divisibleSumPairs(n, k, ar);
    cout << result << endl;
    return 0;
}
