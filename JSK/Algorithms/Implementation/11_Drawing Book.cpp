  #include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    // Complete this function
    int countFront = 0, countBack = 0;
    
    countFront = p / 2;
    countBack = (n  / 2 ) - countFront;
    
    return (countFront < countBack) ? countFront : countBack;
    
    
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
