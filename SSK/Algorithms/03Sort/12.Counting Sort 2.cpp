#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> count(100,0);
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        count[temp]++;
    }
    
    for(int i=0;i<100;i++){
        for(int j=0;j<count[i];j++)
            cout<<i<<" ";
    }
    
    return 0;
}
