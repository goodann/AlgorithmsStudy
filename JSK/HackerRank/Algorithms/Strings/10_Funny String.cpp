#include <bits/stdc++.h>

using namespace std;

string funnyString(string s){
    // Complete this function
    bool isTrue=false;
    for(int i = 1; i < s.length();i++){
        if( abs(s[i] -s[i-1]) != abs(s[s.length() - i-1] - s[s.length() - i ])){
            isTrue = true;
        }
        if( isTrue){
            break;
        }
    }
    if(!isTrue){
        return "Funny";
    }
    else{
        return "Not Funny";
    }
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string result = funnyString(s);
        cout << result << endl;
    }
    return 0;
}
