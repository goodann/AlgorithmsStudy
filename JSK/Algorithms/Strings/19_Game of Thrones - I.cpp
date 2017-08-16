#include <bits/stdc++.h>

using namespace std;

string gameOfThrones(string s){
    // Complete this function
    const int ALPHABET = 26;
    int alphabet[ALPHABET] = {0};
    
    for(int i =0; i < s.length();i++){
        alphabet[s[i]-'a']++;
    }
    bool isPalindrome=false;
    bool isOdd=false;
    for(int i =0; i < ALPHABET;i++){
        if(alphabet[i] %2 == 1 ){
            if(isOdd){
                return "NO";
            }
            isOdd=true;
        }
    }
    return "YES";
}

int main() {
    string s;
    cin >> s;
    string result = gameOfThrones(s);
    cout << result << endl;
    return 0;
}
