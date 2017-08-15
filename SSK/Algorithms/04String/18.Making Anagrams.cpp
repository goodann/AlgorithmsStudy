#include <bits/stdc++.h>

using namespace std;

int makingAnagrams(string s1, string s2){
    // Complete this function
    vector<int> aAlpha(26);
    vector<int> bAlpha(26);
    for(int i=0;i<s1.size();i++){
        aAlpha[s1[i]-'a']++;
    }
    for(int i=0;i<s2.size();i++){
        bAlpha[s2[i]-'a']++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        //cout<<aAlpha[i]<<","<<bAlpha[i]<<endl;
        int diff=abs(aAlpha[i]-bAlpha[i]);
        count+=diff;
    }
    return count;
}

int main() {
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int result = makingAnagrams(s1, s2);
    cout << result << endl;
    return 0;
}
