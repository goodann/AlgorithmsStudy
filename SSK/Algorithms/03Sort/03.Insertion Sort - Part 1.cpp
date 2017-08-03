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
void insertionSort(vector <int>  ar) {
    
    for(int i=0;i<ar.size()-1;i++){
        if(ar[i]>ar[i+1]){
            int temp=ar[i+1];
            for(int j=0;j<i+1;j++){
                if(temp<ar[j]){
                    for(int k=i+1;k>j;k--){
                        ar[k]=ar[k-1];
                        for(int j=0;j<ar.size();j++){
                        cout<<ar[j]<<" ";

                        }
                        cout<<endl;
                    }
                    
                    
                    ar[j]=temp;
                    break;
                }
            }
        }
        
        
        
    }
    for(int j=0;j<ar.size();j++){
        cout<<ar[j]<<" ";

    }
    cout<<endl;


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

    insertionSort(_ar);
    return 0;
}
