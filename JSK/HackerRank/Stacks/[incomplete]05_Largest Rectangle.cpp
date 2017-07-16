#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,num,max=-1,current,limit,size;
    vector<int> h;
    cin >> N;
    for(int i = 0; i < N ; i++){
        cin>>num;
        h.push_back(num);
    }
    
    int i,j,k;
    for( i =  0 ; i < N ; i++){
        size=h[i];
        limit=N;
        for( j = 1 ; j <= h[i]; j++){
            for(j = i ; j < N ; j++){
                if( h[j] < j){
                    limit=j-1;
                    break;
                }
            }    
        }
        
        current = (limit-i)* size;
        if( max < current){
            max=current;
        }
    }
    /*
    for(int i = 0 ; i < N ; i++){
        for(int j = 1 ; j < h[i]; j++){
            for(int k = i ;k < N ; k++){
                if( j > h[k]){
                    limit=k-1;
                    break;
                }
            }
            current = (limit-i)* j;
           // cout<<current<<endl;
            if( max < current){
                max=current;
            }
        }
    }*/
    cout<<max;
    return 0;
}
