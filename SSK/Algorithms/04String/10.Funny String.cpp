#include <bits/stdc++.h>

using namespace std;

string funnyString(string s){
    // Complete this function
    int size= s.size();
    for(int i=0;i<size-1;i++){
        int a = abs(s[i+1]-s[i]);
        int b = abs(s[size-i-2]-s[size-i-1]);
        //cout<<a<<","<<b<<endl;
        if(a != b){
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
