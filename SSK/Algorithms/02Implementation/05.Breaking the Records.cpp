#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    int max=s[0];
    int min=s[0];
    vector<int> count(2,0);
    for(int i=1;i<s.size();i++){
        if(s[i]>max){
            count[0]++;
            max=s[i];
        }
        if(s[i]<min){
            count[1]++;
            min=s[i];
        }
    }
    return count;
    // Complete this function
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}
