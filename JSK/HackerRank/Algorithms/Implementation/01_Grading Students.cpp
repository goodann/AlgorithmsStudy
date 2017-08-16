#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    // Complete this function
    int size=grades.size();
    int score,difference;
    vector<int> roundedGrades;
    for(int i = 0 ; i < size ; i++){
        score= grades[i];
        difference = 5 - score%5; 
        
        if( score + difference < 40){
            roundedGrades.push_back(score);
        }
        else if (difference < 3){
            roundedGrades.push_back(score+difference);
        }
        else{
            roundedGrades.push_back(score);
        }
        
    }
    return roundedGrades;
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
