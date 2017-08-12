#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        // your code goes here
        
        string h = "hackerrank";
        int hcount = 0;
        
        for(int s_i=0; s_i<s.size(); s_i++){
            if(s[s_i]==h[hcount]){
                hcount++;
            }
        }
        if(hcount >= h.size()){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
    return 0;
}
