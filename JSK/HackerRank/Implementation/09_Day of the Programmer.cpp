#include <bits/stdc++.h>

using namespace std;

string solve(int year){
    // Complete this function
    string stringYear = to_string(year);
    string fullDate;
    if( year <= 1917){
        if(year % 4 ==0) {
           fullDate += "12.09.";
        }
        else {
            fullDate += "13.09.";
        }
    }
    else if( year == 1918){
        fullDate += "26.09.";
    }
    else{
        if( year % 400  == 0 || (year % 4 ==0  && year % 100 != 0)){
            fullDate += "12.09.";
        }
        else {
            fullDate += "13.09.";
        }     
    }
    fullDate +=stringYear;
    
    return fullDate;
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
