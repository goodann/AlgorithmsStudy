#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printRatioInArray(int n,vector<int> arr){
    int positive=0,negative=0,zero=0;

    for(int i = 0 ; i < n ; i++){
        (arr[i] > 0) ? positive++ : ((arr[i] < 0) ? negative++ : zero++);
    }
    
    cout.precision(6);
    cout <<fixed<< positive/(double)n<<endl;    //format specifier
    cout <<fixed<<  negative/(double)n<<endl;
    cout <<fixed<< zero/(double)n<<endl;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    printRatioInArray(n,arr);
    
    
    return 0;
}
