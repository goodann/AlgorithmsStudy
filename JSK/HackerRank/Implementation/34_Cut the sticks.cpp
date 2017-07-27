#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    int count = n;
    int cutStick, min;

    
    while( count !=  0 ){
        min = 1000;            
        for(int i = 0 ; i < n; i++){
            if( arr[i] > 0 && arr[i] < min){
                min = arr[i];
            }
        }
        cutStick = 0;
        for(int i = 0 ; i < arr.size() ; i++ ){
            if( arr[i] <= 0){
                continue;
            }
            arr[i] -= min;
            cutStick++;
            if( arr[i] <= 0){
                count--;
            }
        }
        cout<<cutStick<<endl;
    }
    
    return 0;
}
