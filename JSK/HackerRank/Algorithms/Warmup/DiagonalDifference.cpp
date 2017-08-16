#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int differenceOfDiagonalsInMatrix(int n, vector< vector<int> > matrix){
    
    int diagonal1=0, diagonal2=0;
    
    for(int i = 0 ; i< n; i++){
        diagonal1+=matrix[i][i];
        diagonal2+=matrix[n-1-i][i];
    }
    return diagonal1-diagonal2;
}

int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    int difference=differenceOfDiagonalsInMatrix(n,a);
    
    cout<<abs(difference);
    return 0;
}
