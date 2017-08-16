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
    for(int i = 0 ; i < s.size();i++){
        if( s[i] >= 65 && s[i] <= 90){
            if (s[i] + k % 26  > 90){
                s[i]= (s[i]+ (k%26)) %91 + 65;
            }
            else{
                s[i] +=  (k %26);
            }
 
        }
        else if(s[i] >= 97 && s[i] <= 122){
            if (s[i] + k % 26  > 122){
                s[i]= (s[i]+ (k%26)) %123 + 97;
            }
            else{
                s[i] +=  (k %26);
            }
        }
    }
    cout<<s<<endl;
    
    return 0;
}
