#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q,t;
    string S,priorS;
    vector<string> v;
    cin >> Q;
    for(int i = 0 ; i < Q ; i++){
        cin>> t;
        switch (t){
            case 1:{
                string s;
                cin >> s;
                priorS=S;
                S +=s;
                v.push_back(priorS);
                break;
            }
            case 2:{
                int n;
                cin >> n;
                string newString;
                priorS=S;
                for(int i = 0 ; i < S.size() - n ; i++){
                    newString+=S[i];
                }
                S=newString;
                v.push_back(priorS);
                break;
            }
            case 3:{
                int n;
                cin >>n;
                cout<< S[n-1]<<endl;
                break;
            }
            case 4 :{
                S = v.back();
                v.pop_back();
                break;
            }
        }
      
        
    }
    return 0;
}
