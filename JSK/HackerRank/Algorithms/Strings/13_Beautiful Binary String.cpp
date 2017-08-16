#include <bits/stdc++.h>

using namespace std;

int minSteps(int n, string B){
    // Complete this function
    int count =0;
    for(int i = 0 ; i < n -2; i++){
        if( B[i] == '0'){
            if( B[i+1] == '1'){
                if(B[i+2] == '0'){
                    B[i+2]='1';
                    count++;   
                }
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    string B;
    cin >> B;
    int result = minSteps(n, B);
    cout << result << endl;
    return 0;
}
