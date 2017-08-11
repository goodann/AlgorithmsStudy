#include <bits/stdc++.h>

using namespace std;

int maxLen(string s){
    // Complete this function
    
    string letters="";
    
    for(int i = 0 ; i < s.size();i++){
        bool isExist=false;
        for(int j= 0 ; j< letters.size();j++){
            if( letters[j] == s[i]){
                isExist=true;
            }
        }
        if( !isExist){
            letters+=s[i];
        }
        
    }
    
    int length=0;
    for(int i = 0 ; i< letters.size()-1;i++){
        for(int j = i+1; j < letters.size();j++){
            string tmp =s;
            for(int k = 0 ; k < letters.size();k++){
                if( letters[k] == 0 || k == i || k == j){
                    continue;
                }
                tmp.erase(remove(tmp.begin(), tmp.end(), letters[k]), tmp.end()); 
            }
            bool flag = false;
            for(int p = 0 ; p < tmp.size()-1;p++){
                if( tmp[p] == tmp[p+1]){
                    flag=true;
                }
                if(flag){
                    break;
                }
            }
            if(!flag){
                int tmpSize=tmp.size();
                if( length < tmpSize){
                    length = tmp.size();
                }
            }
        }
    }
    return length;
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
