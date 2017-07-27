#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int tree=1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                tree*=2;
            }else{
                tree++;
            }
        }
        cout<<tree<<endl;
    }
    return 0;
}
