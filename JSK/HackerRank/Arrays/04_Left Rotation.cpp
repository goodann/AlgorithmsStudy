#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,d;
    cin >> n >>d;
    vector<int> arr(n),tmp;
    
    int i,j;
    for( i = 0 ; i < n ; i++){  // fill numbers
        cin >> arr[i];
    }
    /*       //timeout 8
    int tmpNum;
    for( i = 0 ; i < n ; i++){  // fill numbers
        cin >> arr[i];
    }
    for( i = 0 ; i < d ; i++){
        tmpNum=arr[0];
        for( j = 1 ; j < n ; j++){
            arr[j-1]=arr[j];
        }
        arr[n-1]=tmpNum;
    }
    for(int k = 0 ; k < n ; k++){   //print result
        cout << arr[k] <<" ";
    }*/
    

    for( i = 0 ; i < d;  i++){  // insert to tmp array that needs to be rotated
        tmp.push_back(arr[i]);
    }
    for( ;  i < n; i++){    //move numbers to left
        arr[i-d]=arr[i];
    }
    for(int j =0 ;j < d ;j++ ){ //fill numbers in tmp array
        arr[i - d + j]= tmp[j];
    }
     for(int k = 0 ; k < n ; k++){   //print result
        cout << arr[k] <<" ";
    }
    return 0;
}
