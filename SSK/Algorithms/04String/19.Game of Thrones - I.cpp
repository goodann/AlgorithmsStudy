#include <bits/stdc++.h>

using namespace std;

string gameOfThrones(string s){
    // Complete this function
    vector<int> alpha(26);
    for(int i=0;i<s.size();i++){
        alpha[s[i]-'a']++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(alpha[i]%2==1)
            count++;
    }
    if(count>=2)
        return "NO";
    else
        return "YES";
}

int main() {
    string s;
    cin >> s;
    string result = gameOfThrones(s);
    cout << result << endl;
    return 0;
}
