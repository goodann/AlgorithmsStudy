#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> A,answer;
    int N,num,minSub;
    cin >> N;
    
    for(int i = 0 ; i < N ; i++){
        cin >> num;
        A.push_back(num);
    }
    
    sort(A.begin(),A.end());
    
    minSub = A[1] - A[0];
    answer.push_back(A[0]);
    answer.push_back(A[1]);
    for(int i = 1 ; i < N-1;i++){
        if( A[i+1] - A[i] == minSub){
            answer.push_back(A[i]);
            answer.push_back(A[i+1]);
        }
        else if ( A[i+1] - A[i] < minSub){
            answer.clear();
            answer.push_back(A[i]);
            answer.push_back(A[i+1]);
            minSub = A[i+1] - A[i];
        }
    }
    for(int i = 0 ; i < answer.size();i++){
        cout<<answer[i]<<" ";
    }
    return 0;
}
