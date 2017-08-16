#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;




int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,n,a,b;
    cin >>T;
    
    set<int>::iterator iter;
    set<int> numbers;
    
    int sum;
    for(int T_i =0 ; T_i < T; T_i++){
        cin >>n >> a >> b;
        
        for(int i = 0 ; i < n; i++){
                sum = i* a + (n -i-1)* b;
                numbers.insert(sum);
        }
        
        for (iter = numbers.begin(); iter != numbers.end(); ++iter){
            cout << *iter << " ";
        }
        cout<<endl;
        numbers.clear();
    }
    
    return 0;
}
