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
    vector<int> arrI(n);
    vector<string> arr(n);
    vector<int> arrI2(n);
    vector<string> arr2(n);
    
    for(int i=0;i<n;i++){
        int temp;
        cin>>arrI[i];
        count[arrI[i]]++;
        cin>>arr[i];
        if(i<(n/2))
            arr[i]="-";
        
    }
    
    for(int i=1;i<100;i++){
        count[i]+=count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        arrI2[count[arrI[i]]-1]=arrI[i];
        arr2[count[arrI[i]]-1]=arr[i];
        count[arrI[i]]--;
        
    }
    
    for(int i=0;i<n;i++){
        //cout<<arrI2[i]<<" "<<arr2[i]<<endl;
        cout<<arr2[i]<<" ";
    }
    return 0;
}
