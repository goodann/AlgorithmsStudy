#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,A,B,count;
    int squareNumber;
    
    cin >>T;
    for(int i = 0 ; i < T ; i++){
        cin >>A >>B;
        count = 0;
        
        squareNumber = -1;
        for(int j = 1 ;squareNumber <= B ; j++){
            squareNumber = pow(j,2);    
            if( squareNumber >= A && squareNumber <= B){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
