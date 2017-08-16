#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    // Complete this function
    int highestScore = s.front(), lowestScore = s.front();
    int highestScoreCount=0, lowestScoreCount=0;
    int gameSize=s.size();
    vector<int> result;
    
    for(int i = 0 ; i < gameSize; i++){
        if( s[i] > highestScore){
            highestScore=s[i];
            highestScoreCount++;
        }
        else if(s[i] < lowestScore){
            lowestScore=s[i];
            lowestScoreCount++;
        }
    }
    
    result.push_back( highestScoreCount);
    result.push_back(lowestScoreCount);
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}
