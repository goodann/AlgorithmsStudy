#include <bits/stdc++.h>

using namespace std;
bool compare(string a,string b){
    if(a.size()<b.size()){
        return true;
    }else if(a.size()>b.size()){
        return false;
    }else{
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i])
                return a[i]<b[i];
            
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cin >> unsorted[unsorted_i];
    }
    sort(unsorted.begin(),unsorted.end(),compare);
    for(int i=0;i<n;i++){
        cout<<unsorted[i]<<endl;
    }
    // your code goes here
    return 0;
}
