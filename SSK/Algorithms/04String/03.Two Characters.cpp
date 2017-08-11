#include <bits/stdc++.h>

using namespace std;
bool compare(pair<int,char> a,pair<int,char> b){
    if(a.first>b.first)
        return true;
    return false;
}
bool valid(string s){
    for(int i=1;i<s.size();i++){
        if(s[i-1]==s[i])
            return false;
    }
    return true;
}
int maxLen(string s){
    // Complete this function
    vector<pair<int,char>> counts(26,pair<int,char>());
    for(int i=0;i<s.size();i++){
        counts[s[i]-'a'].second=s[i];
        counts[s[i]-'a'].first++;
    }
    sort(counts.begin(),counts.end(),compare);
    int now1=0;
    int now2=1;
    if(s.size()==1)
        return 0;
    while(counts[now1].first!=0){
        while(counts[now2].first!=0){
            string temp=s;
            for(int i=0;i<counts.size();i++){
                if(i==now1 || i==now2)
                    continue;
                for(int j=0;j<temp.size();j++){
                    while(temp[j]==counts[i].second)
                        temp.erase(j,1);
                }
            }
            if(valid(temp)){
                return temp.size();
                
            }
            now2++;
        }
        now1++;
        now2=now1+1;
    }
    
    
   
    
    return 0;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = maxLen(s);
    cout << result << endl;
    return 0;
}
