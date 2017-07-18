#include <bits/stdc++.h>

using namespace std;

int bonAppetit(int n, int k, int b, vector <int> ar) {
    // Complete this function
    int sumAll = 0, sumSplit = 0;
    int sizeArray = ar.size();
    
    for(int i = 0 ; i < sizeArray ; i++){
        sumAll +=ar[i];
    }
    sumSplit = sumAll - ar[k];

    if( sumSplit / 2 == b){
        return 0;
    }
    else {
        return (sumAll - sumSplit)/2;
    }
    
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int b;
    cin >> b;
    int result = bonAppetit(n, k, b, ar);
    if (result == 0){
        cout<<"Bon Appetit";
    }
    else{
        cout << result << endl;
    }
    return 0;
}
