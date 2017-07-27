#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> arr(n,0);
    vector<int> counts(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int j=0;
    counts[j]++;
    for(int i=1;i<n;i++){
        if(arr[i-1]!=arr[i]){
            j++;
        }
        counts[j]++;
    }
    int max=counts[0];
    for(int i=1;i<n;i++){
        if(max<counts[i]){
            max=counts[i];
        }
    }
    cout<<n-max<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

