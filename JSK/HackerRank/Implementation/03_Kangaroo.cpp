#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    // Complete this function
    
    if( v2 >= v1 ){
        return "NO";
    }
    
    int posX1=x1,posX2=x2;
    
    while( posX1 < posX2) {
        posX1 += v1;
        posX2 += v2;
        if( posX1 == posX2){
            return "YES";
        }
    } 
    
    return "NO";
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
