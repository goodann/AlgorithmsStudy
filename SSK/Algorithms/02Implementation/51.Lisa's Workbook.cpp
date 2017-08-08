#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    cin>>n>>k;
    vector<int> t(n);
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    int page=1;
    int number=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=t[i];j++){
            //cout<<page<<","<<j<<endl;
            if(page==j)
                number++;
            if(j%k==0 && j!=t[i])
                page++;
        }
        page++;
        
    }
    cout<<number<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
