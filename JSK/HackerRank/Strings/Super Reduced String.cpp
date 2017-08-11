#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s){
    // Complete this function
    int i =0;
    while( i != s.size()){
        if(s[i] == s[i+1]){
            s.erase(i,2);
            i=0;
        }
        else{
            i++;
        }
    }
    if ( s.size() == 0){
        s = "Empty String";
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}
