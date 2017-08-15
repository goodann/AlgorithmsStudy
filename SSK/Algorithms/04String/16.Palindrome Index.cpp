#include <bits/stdc++.h>

using namespace std;

int palindromeIndex(string s){
    // Complete this function
    vector<int> alpha(26);
    
    for(int i=0;i<s.size();i++){
        alpha[s[i]-'a']++;
    }
    int max=0;
    int maxI=0;
    
    for(int i=0;i<26;i++){
        if(max<alpha[i]){
            max=alpha[i];
            maxI=i;
        }
    }
    
    
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i]){
            if(s[i+1]==s[s.size()-1-i] && s[i+2]==s[s.size()-2-i])
                return i;
            if(s[i]==s[s.size()-2-i])
                return s.size()-1-i;
            
        }
    }
    return -1;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = palindromeIndex(s);
        cout << result << endl;
    }
    return 0;
}
