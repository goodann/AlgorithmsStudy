#include <bits/stdc++.h>

using namespace std;

void whoIsWinner(int aScore,int bScore,int &aPoint,int &bPoint){
    if( aScore > bScore){
        aPoint++;
    }
    else if( aScore < bScore){
        bPoint++;
    }
}
vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    int aPoint=0,bPoint=0;
    vector<int> result(2);
    
    whoIsWinner(a0,b0,aPoint,bPoint);
    whoIsWinner(a1,b1,aPoint,bPoint);
    whoIsWinner(a2,b2,aPoint,bPoint);
    
    result[0]=aPoint;
    result[1]=bPoint;
    
    return result;
}


int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}
