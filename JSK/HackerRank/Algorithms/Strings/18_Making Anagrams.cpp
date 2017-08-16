#include <bits/stdc++.h>

using namespace std;

int makingAnagrams(string s1, string s2){
    // Complete this function
    int countS1=0,countS2=0;;
    string tmpS1=s1,tmpS2=s2;
     for(int i = 0 ;  i < s1.length();i++){
        int found=tmpS2.find(s1[i]);
        if (found==std::string::npos){
            countS1++;
        }
        else{
            tmpS2.erase(found,1);
        }
    }
    for(int i = 0 ;  i < s2.length();i++){
        int found=tmpS1.find(s2[i]);
        if (found==std::string::npos){
            countS2++;
        }
        else{
            tmpS1.erase(found,1);
        }
    }
    return countS1+countS2;
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
