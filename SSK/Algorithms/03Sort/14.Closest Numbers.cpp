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
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>> pair;
    int min=2100000000;
    sort(arr.begin(),arr.end());
    vector<int> newPair(2);
    for(int i=0;i<n-1;i++){
        int diff=arr[i+1]-arr[i];
        if(diff<min){
            min=diff;
            pair.clear();
            newPair[0]=arr[i];
            newPair[1]=arr[i+1];
            pair.push_back(newPair);
        }
        else if(diff==min){
            newPair[0]=arr[i];
            newPair[1]=arr[i+1];
            pair.push_back(newPair);
        }
    }
    for(int i=0;i<pair.size();i++){
        cout<<pair[i][0]<<" "<<pair[i][1]<<" ";
    }
    return 0;
}
