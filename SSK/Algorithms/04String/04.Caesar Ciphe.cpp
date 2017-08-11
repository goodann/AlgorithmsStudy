#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]='a'+(s[i]-'a'+k)%26;
        }
        if(s[i]>='A' && s[i]<='Z'){
            s[i]='A'+(s[i]-'A'+k)%26;
        }
    }
    cout<<s<<endl;
    return 0;
}
