#include <bits/stdc++.h>

using namespace std;

bool numberCompare(string a,string b){
    if( a.size() < b.size()){
        return true;
    }
    else if ( a.size() > b.size()){
        return false;
    }
    else{
        return ( a< b);
    }
}

int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cin >> unsorted[unsorted_i];
    }
    // your code goes here
    sort (unsorted.begin(), unsorted.end(), numberCompare);
    for(int unsorted_i = 0 ; unsorted_i < n ; unsorted_i++){
        cout<<unsorted[unsorted_i]<<endl;
    }
    return 0;
}
