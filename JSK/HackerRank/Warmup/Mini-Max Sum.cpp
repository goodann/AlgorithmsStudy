#include <bits/stdc++.h>

using namespace std;

void sort(vector<int>& arr){    //selection sort
    int i,j;
    for( i =1 ; i < arr.size() ; i++){
        int tmp=arr[i];
        for( j = i-1; j >=0 && arr[j] > tmp  ; j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=tmp;
    }
}

void printMinMaxSum(vector<int> arr){
    long long min =0,max=0;
    for(int i = 0 ; i < arr.size()-1; i++){
        min+=arr[i];
    }
    for(int j = arr.size()-1; j > 0 ; j--){
        max+=arr[j];
    }
    cout <<min <<" "<<max;
}


int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    
    sort(arr);
    printMinMaxSum(arr);
    
    return 0;
}
