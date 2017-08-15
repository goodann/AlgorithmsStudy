#include <bits/stdc++.h>

using namespace std;

string twoStrings(string s1, string s2){
    // Complete this function
    const int ALPHABET =26;
    int s1Alpha[26] = {0};
    int s2Alpha[26] = {0};
    for(int i = 0 ;  i < s1.length();i++){
        s1Alpha[s1[i]-'a']++;
    }
    for(int i = 0 ;  i < s2.length();i++){
        s2Alpha[s2[i]-'a']++;
    }
    for(int i = 0 ; i < ALPHABET;i++){
        if(s1Alpha[i] > 0 && s2Alpha[i] > 0){
            return "YES";
        }
    }
    return "NO";
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;
        string result = twoStrings(s1, s2);
        cout << result << endl;
    }
    return 0;
}
