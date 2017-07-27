#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        int sqa=sqrt(a);
        int sqb=sqrt(b);
        int result=sqb-sqa;
        
        if(sqa*sqa==a)
            result++;
        cout<<result<<endl;
    }
    return 0;
}
