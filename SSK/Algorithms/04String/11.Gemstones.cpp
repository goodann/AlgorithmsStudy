#include <bits/stdc++.h>

using namespace std;

int gemstones(vector <string> arr){
    // Complete this function
    
    vector<int> counts(26,0);
    for(int i=0;i<arr.size();i++){
        vector<bool> isCount(26,false);
        for(int j=0;j<arr[i].size();j++){
            if(!isCount[arr[i][j]-'a']){
                counts[arr[i][j]-'a']++;
                isCount[arr[i][j]-'a']=true;
            }
            
        }
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(counts[i]==arr.size())
            count++;
    }
    return count;
}
int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = gemstones(arr);
    cout << result << endl;
    return 0;
}
