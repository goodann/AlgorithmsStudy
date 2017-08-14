#include <bits/stdc++.h>

using namespace std;

int minSteps(int n, string B){
    // Complete this function
    string temp(B);
    int f=temp.find("010");
    int count=0;
    while(f!=string::npos){
        temp[f+2]=1;
        f=temp.find("010");
        count++;
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
