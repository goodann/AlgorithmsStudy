#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,k;
    cin>>i>>j>>k;
    int count=0;
    for(int l=i;l<=j;l++){
        int swaped=0;
        int l2=l;
        while(l2!=0){
            swaped*=10;
            swaped+=l2%10;
            l2/=10;
        }
        if((abs(l-swaped)%k)==0)
            count++;
        
    }
    cout<<count<<endl;
    return 0;
}
