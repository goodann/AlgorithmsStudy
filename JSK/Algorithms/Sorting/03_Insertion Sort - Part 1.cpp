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
void printSort(vector<int> ar){
    for(int i = 0 ; i < ar.size() ; i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(vector <int>  ar) {
    int size =ar.size();
    for(int i = size -1 ; i > 0 ;  i--){
        int tmp = ar[i];
     //   cout<<tmp<<endl;
        int j = i;
        while( j >0 && ar[j-1] >tmp ){
            ar[j]=ar[j-1];
            j--;
            printSort(ar);
        }
        ar[j]=tmp;
    }
    printSort(ar);

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
