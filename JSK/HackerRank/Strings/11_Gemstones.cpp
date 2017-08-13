#include <bits/stdc++.h>

using namespace std;

int gemstones(vector <string> arr){
    // Complete this function
    const int ALPHABET = 26;
    int freq[ALPHABET] = {0};
    
    for(int i = 0 ; i < arr.size();i++){
        set<char> tmpAlphabet;
        for(int j = 0 ; j < arr[i].length();j++){
            tmpAlphabet.insert(arr[i][j]);
        }
        set<char>::iterator iter;
        for(iter= tmpAlphabet.begin(); iter != tmpAlphabet.end(); ++iter )
        {
            freq[*iter - 'a']++;
        }
    }
    int count =0;
    for(int i = 0 ; i <ALPHABET ;i++){
        if( freq[i] == arr.size()){
            count++;
        }
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
