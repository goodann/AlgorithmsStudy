#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s){
    // Complete this function
    for(int i=1;i<s.size();i++){
        while(s[i-1]==s[i]){
            s.erase(i-1,2);
            i=1;
        }
    }
    if(s=="")
        return "Empty String";
    return s;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}
