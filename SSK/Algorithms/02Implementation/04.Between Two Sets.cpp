#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector < int > a, vector < int > b){
    // Complete this function
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int count=0;
    for(int i=a.back();i<=b[0];i++){
        int currentCount=0;
        for(int j=0;j<a.size();j++){
            if(i%a[j]!=0){
                currentCount++;
                break;
            }
        }
        for(int j=0;j<b.size();j++){
            if(b[j]%i!=0){
                currentCount++;
                break;
            }
        }
        if(currentCount==0)
            count++;
    }
    return count;
    
    
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
