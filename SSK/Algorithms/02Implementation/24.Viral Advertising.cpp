#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int count=0;
    int n;
    cin>>n;
    int people=5;
    for(int i=0;i<n;i++){
        people/=2;
        count+=people;
        people*=3;
        
    }
    cout<<count<<endl;
    return 0;
}
