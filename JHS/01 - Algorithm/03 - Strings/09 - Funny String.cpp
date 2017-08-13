#include <bits/stdc++.h>

using namespace std;

string funnyString(string s){
    // Complete this function
    
    for(int s_i=0; s_i<s.size()-1; s_i++){
        if(abs(s[s_i+1] - s[s_i]) != abs(s[(s.size()-1) - (s_i + 1)] - s[(s.size()-1) - s_i])){
            return "Not Funny";
        }
    }
    
    return "Funny";
    
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
