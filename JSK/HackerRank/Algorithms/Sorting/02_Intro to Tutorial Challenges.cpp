#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int V,n;
    cin >>V >> n;
    vector<int> arr;
    for(int n_i = 0 ; n_i < n ; n_i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    for(int n_i = 0 ; n_i < n ; n_i++){
        if(arr[n_i] ==V){
            cout<<n_i;
            break;
        }
    }
    return 0;
}
