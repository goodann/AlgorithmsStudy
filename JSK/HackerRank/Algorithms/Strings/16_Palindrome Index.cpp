#include <bits/stdc++.h>

using namespace std;

int palindromeIndex(string s){
    // Complete this function
    for(int i = 0 ; i < s.size()/2;i++){
        if( s[i] != s[s.size()-i-1]){
            if(s[i+1] ==  s[s.size()-i-1] &&s[i+2]==s[s.size()-2-i]){
                return i;
            }
            else if( s[i] == s[s.size()-i-2]){
                return s.size()-i-1;
            }
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
