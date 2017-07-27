#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int k;
    cin>>n>>k;
    vector<int> arr(k+1);
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        arr[input%k]++;
    }    
    int result=(arr[0]>1)?1:arr[0];
    
    for(int i=1;i<=k/2;i++){    
        if(arr[i]>arr[k-i])
            result+=arr[i];
        else
            result+=arr[k-i];
    }
    if(k%2==0){
        result-=(arr[k/2]-1);
    }
    
    cout<<result<<endl;
    return 0;
}
