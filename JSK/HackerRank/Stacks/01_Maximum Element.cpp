#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,type,x,max,maxIndex=0,beforeMax;
    vector<int> stack;
     
    cin>>N;
    
    for(int i = 0 ; i < N ; i++){
        cin>>type;
        if (type == 1){
            cin>>x;
            stack.push_back(x);
        }
        else if (type == 2){
            stack.pop_back();
        }
        else{
            if( stack.size() <= maxIndex){
                max=stack[0];
                maxIndex=0;
            }
            else{
                max=stack[maxIndex];    
                if( max != beforeMax){
                    max=stack[0];
                    maxIndex=0;
                }
            }
            for(int i = maxIndex+1 ; i < stack.size(); i++){
                if( max < stack[i]){
                    max=stack[i];
                    maxIndex=i;
                    beforeMax=max;
                }
            } 
            cout<<max<<endl;    
        }
    }

    return 0;
}
