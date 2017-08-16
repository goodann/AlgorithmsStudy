#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar) {
    // Complete this function
    int arr[101]= {0};
    int arraySize = ar.size();
    
    for(int i = 0 ; i < arraySize ; i++){
        arr[ar[i]]++;
    }
    
    int count = 0;
    for(int i = 0 ; i < 101 ; i++){
        count+= arr[i] / 2;
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
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}
