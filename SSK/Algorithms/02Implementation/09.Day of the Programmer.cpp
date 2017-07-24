#include <bits/stdc++.h>

using namespace std;

string solve(int year){
    // Complete this function
    int dd=13;
    if(year<1918){
        if(year%4==0)
            dd=12;
    }
    else if(year==1918){
        dd=26;
    }else{
        if(year %100 !=0 && year%4==0 || year%400==0)
            dd=12;
    }
    string result;
    
    result+=to_string(dd);
    result+=".09.";
    result+=to_string(year);
    return result;
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
