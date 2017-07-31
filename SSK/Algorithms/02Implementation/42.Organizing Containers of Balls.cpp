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
        int n;
        cin >> n;
        vector< vector<int> > M(n,vector<int>(n));
        vector<int> a(n);
        vector<int> b(n);
        for(int M_i = 0;M_i < n;M_i++){
           for(int M_j = 0;M_j < n;M_j++){
              cin >> M[M_i][M_j];
               a[M_i]+=M[M_i][M_j];
               b[M_j]+=M[M_i][M_j];
           }
        }
        
        string pts="Possible";
        for(int i=0;i<n;i++)
        {
            int j=0;
            for(j=i;j<n;j++)
            {
                if(a[i] == b[j])
                {
                    int temp = b[j];
                    b[j] = b[i];
                    b[i] = temp;
                    break;
                }
            }
            if(j==n)
            {
                pts = "Impossible";
                break;
            }
        }
        cout<<pts<<endl;
        // your code goes here
    }
    return 0;
}
