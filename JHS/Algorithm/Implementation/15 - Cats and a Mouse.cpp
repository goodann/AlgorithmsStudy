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


int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        
        int disA = abs(x-z);
        int disB = abs(y-z);
        
        if(disA == disB){
            cout << "Mouse C" << endl;
        }else{
            if(disA > disB){
                cout << "Cat B" << endl;
            }else{
                cout << "Cat A" << endl;
            }
        }
        
    }
    return 0;
}
