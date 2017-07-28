#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    // Complete this function
    int result;
    
    if(n % 2 == 0){
        n++;
    }
    
    if(n / 2 >= p){
        result = p / 2;
    }else{
        result = (n - p) / 2;
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
