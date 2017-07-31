#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int p,q;
    cin>>p>>q;
    int count=0;
    for(int i=p;i<=q;i++){
        long long int pow2=(long long int)i*(long long int)i;
        long long int ten=1;
        long long int temp=i;
        while(temp>0){
            temp/=10;
            ten*=10;
        }
        long long int l=pow2/(long long int)(ten);
        long long int r=pow2%(long long int)(ten);
        //cout<<i<<"="<<l<<"+"<<r<<"|"<<pow2<<","<<ten<<endl;
        if(l+r==i){
            cout<<i<<" ";
            
            count++;
        }
        
    }
    if(count==0)
        cout<<"INVALID RANGE"<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
