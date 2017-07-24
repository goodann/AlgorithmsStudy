#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    // Complete this function
    int x=x2-x1;
    int v=v1-v2;
    if(x*v<0){
        return "NO";
    }
    else{
        int m1=(x1<x2)?x1:x2;
        int m2=(x1<x2)?x2:x1;
        int mv1=(x1<x2)?v1:v2;
        int mv2=(x1<x2)?v2:v1;
        while(m1<m2){
            m1+=mv1;
            m2+=mv2;
        }
        if(m1!=m2)
            return "NO";
    }
    return "YES";
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
