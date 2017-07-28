#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar) {
    // Complete this function
    int count = 0;
    vector<int> arr;
    
    for(int ar_i=0; ar_i<ar.size(); ar_i++){
        bool flag = false;
        int arr_i = 0;
        while(arr_i < arr.size()){
            if(flag == false && arr[arr_i] == ar[ar_i]){
                arr.erase(arr.begin() + arr_i);
                count++;
                arr_i = arr.size();
                flag = true;
            }
            arr_i++;
        }
        if(flag == false){
            arr.push_back(ar[ar_i]);
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
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}
