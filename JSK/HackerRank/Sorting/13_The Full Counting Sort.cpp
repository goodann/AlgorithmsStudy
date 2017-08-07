#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef struct array{
    int order;
    int num;
    string str;
} arr;

bool compare(arr a,arr b){ return a.num < b.num;}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<arr> collection;
    int n,x;
    string s;
    
    cin>>n;
    
    for(int i = 0 ; i < n ; i++){
        arr ar;
        cin >> x >> s;
        
        ar.order = i;
        ar.num=x;
        ar.str = s;
        collection.push_back(ar);
    }
    
    stable_sort(collection.begin(),collection.end(),compare);
    
    for(int i = 0 ; i < collection.size(); i++){
        if( collection[i].order < n/2){
            cout<<"-";
        }
        else{
            cout<<collection[i].str;
        }
        cout<<" ";
    }
    
    return 0;
}
