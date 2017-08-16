#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printHashtag(int n){
    int i,j;
    for(i = 0 ; i < n; i++){
        for( j = 0 ; j < n-i-1 ; j++){
            cout<<" ";
        }
        for(; j < n; j++){
            cout<<"#";
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin >> n;
    
    printHashtag(n);
    
    return 0;
}
