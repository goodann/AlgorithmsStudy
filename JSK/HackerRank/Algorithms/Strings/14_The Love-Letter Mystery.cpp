#include <bits/stdc++.h>

using namespace std;

int theLoveLetterMystery(string s){
    // Complete this function
    int count=0;
    int length = s.length() -1;
    for(int i = 0 ; i < s.size()/2; i++){
        if( s[i] != s[length -i]){
            count+= abs(s[i] - s[length-i]);
        }
    }
    return count;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = theLoveLetterMystery(s);
        cout << result << endl;
    }
    return 0;
}
