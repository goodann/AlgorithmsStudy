#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    vector<int> count(5,0);
    for(int i=0;i<n;i++){
        count[ar[i]-1]++;
    }
    int max=0;
    int maxi=0;
    for(int i=0;i<5;i++){
        if(max<count[i]){
            max=count[i];
            maxi=i;
        }
    }
    return ++maxi;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
