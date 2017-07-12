#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> st;
    int max=-1000000001;
    for(int i=0;i<n;i++){
        int type;
        int x;
        cin>>type;
        switch(type){
            case 1:
                cin>>x;
                st.push_back(x);
                if(max<x)
                        max=x;
                break;
            case 2:
                st.pop_back();
                max=-1000000001;
                for(int i=0;i<st.size();i++)
                    if(max<st[i])
                        max=st[i];
                break;
            case 3:
                
                cout<<max<<endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
