#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin>>q;
    
    vector<string> st;
    for(int i=0;i<q;i++){
        int t;
        int k;
        
        cin>>t;
        
        string input;
        string str;
        int len;
        if(!st.empty()){
            str=st.back();
            len=str.size();
        }
        switch(t){
            case 1:
                cin>>input;
                
                str+=input;
                st.push_back(str);
                break;
            case 2:
                cin>>k;
                str.erase(len-k,k);
                st.push_back(str);
                break;
            case 3:
                cin>>k;
                cout<<str[k-1]<<endl;
                break;
            case 4:
                st.pop_back();
                break;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
