#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int n;
    cin>>n;
    vector<int>arr(n);
    int setSize=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]==i+1){
                for(int k=0;k<n;k++){
                    if(arr[k]==j+1){
                        cout<<k+1<<endl;
                        break;
                        
                    }
                }
                break;
            }
        }
    }
    return 0;
}
