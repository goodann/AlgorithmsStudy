#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        // your code goes here
        
        string hrString = "hackerrank";
        int strSize = s.size();
        int order=0;
        for(int i = 0 ; i < strSize; i++){
            if( hrString[order] == s[i]){
                order++;
            }
        }
        if( order == 10){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
