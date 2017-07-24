#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    int n=grades.size();
    for(int i=0;i<n;i++){
        
        if(grades[i]>=38 && grades[i]%5>2)
            grades[i]=(((int)grades[i]/5)+1)*5;
    }
    // Complete this function
    return grades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}
