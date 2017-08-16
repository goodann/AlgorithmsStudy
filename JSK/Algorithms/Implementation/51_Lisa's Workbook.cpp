#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int chapter,max,count = 0 ,page =1;
    vector<int> problem(1);
    
    cin >> chapter >> max;
    
    int num;
    for(int i = 0 ; i < chapter ; i++){
        cin >> num;
        problem.push_back(num);
    }
    
    
    for(int i = 1 ; i <= chapter;i++){
        int start=1;
        for(int j = 1; j<= problem[i]; j++){
            if( start >  max){
                start-=max;
                page++;
            }
            if(page == j){
                count++;
            }
            start++;
        }
        page++;
        
    }
    cout<<count;
    
    return 0;
}
