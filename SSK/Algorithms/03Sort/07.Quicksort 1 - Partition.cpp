#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void partition(vector <int>  ar) {
    // Enter code for partitioning and printing here. 
    if(ar.size()==0)
        return;
    if(ar.size()==1){
        cout<<ar[0]<<" ";
        return;
    }
    int pivot=ar[0];
    vector<int> left;
    vector<int> right;
    for(int i=1;i<ar.size();i++){
        if(ar[i]<pivot){
            left.push_back(ar[i]);
        }else{
            right.push_back(ar[i]);
        }
            
    }
    partition(left);
    cout<<ar[0]<<" ";
    partition(right);
    
}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
   cin >> _ar_size;
    
     for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

   partition(_ar);
   
   return 0;
}
