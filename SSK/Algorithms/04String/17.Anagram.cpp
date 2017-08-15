#include <bits/stdc++.h>

using namespace std;

int anagram(string s){
    // Complete this function
    if(s.size()%2!=0)
        return -1;
    string a=s.substr(0,s.size()/2);
    string b=s.substr(s.size()/2,s.size()/2);
    vector<int> aAlpha(26);
    vector<int> bAlpha(26);
    for(int i=0;i<a.size();i++){
        aAlpha[a[i]-'a']++;
    }
    for(int i=0;i<b.size();i++){
        bAlpha[b[i]-'a']++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        //cout<<aAlpha[i]<<","<<bAlpha[i]<<endl;
        int diff=abs(aAlpha[i]-bAlpha[i]);
        count+=diff;
    }
    return count/2;
    
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

