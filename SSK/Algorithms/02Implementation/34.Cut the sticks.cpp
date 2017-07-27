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
    while(arr.size()>0){
        int min=2100000000;
        
        cout<<arr.size()<<endl;
        for(int i=0;i<arr.size();i++){
            if(min>arr[i])
                    min=arr[i];
        }
        int i=0;
        while(i<arr.size()){
            arr[i]-=min;
            if(arr[i]<=0)
                arr.erase(arr.begin()+i);
            else{
                
                i++;
            }
        }
        
    }
    return 0;
}
