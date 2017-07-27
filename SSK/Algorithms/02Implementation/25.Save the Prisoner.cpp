#include <bits/stdc++.h>

using namespace std;

int saveThePrisoner(int n, int m, int s){
    // Complete this function
    int position=(m+(s-1))%n;
    if(position==0)
        return n;
    else
        return position;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int m;
        int s;
        cin >> n >> m >> s;
        int result = saveThePrisoner(n, m, s);
        cout << result << endl;
    }
    return 0;
}
