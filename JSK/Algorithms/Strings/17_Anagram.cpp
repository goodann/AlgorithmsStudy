#include <bits/stdc++.h>

using namespace std;

int anagram(string s){
    // Complete this function
    string s1,s2;
    
    if( s.length() % 2  == 1){
        return -1;
    }
    s1 = s.substr(0,s.length()/2);
    s2 = s.substr(s.length()/2,s.length()-1);
    int count=0;
    for(int i = 0 ;  i < s.length()/2;i++){
        int found=s2.find(s1[i]);
        if (found==std::string::npos){
            count++;
        }
        else{
            s2.erase(found,1);
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
        int result = anagram(s);
        cout << result << endl;
    }
    return 0;
}
