#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin>>q;
    vector<int> que;
    for(int i=0;i<q;i++){
        int type;
        int x;
        cin>>type;
        switch(type){
            case 1:
                cin>>x;
                que.push_back(x);
                break;
            case 2:
                que.erase(que.begin());
                break;
            case 3:
                cout<<que[0]<<endl;
                break;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
