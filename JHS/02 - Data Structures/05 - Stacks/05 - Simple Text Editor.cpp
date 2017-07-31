#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include <string>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q;
    cin >> Q;
    
    
    vector<string> prog;
    
    for(int Q_i=0; Q_i < Q; Q_i++){
        int t;
        cin >> t;
        string S;
        switch(t){
            case 1:
                {
                    string W;
                    cin >> W;
                    S = "";
                    if(prog.size() > 0){
                        S = prog.back();
                    }
                    prog.push_back(S + W);
                    break;
                }
            case 2:
                {
                    int k;
                    cin >> k;
                    S = prog.back();
                    S.erase(S.size() - k, k);
                    prog.push_back(S);
                    break;   
                }
            case 3:
                {
                    int k;
                    cin >> k;
                    S = prog.back();
                    cout << S[k-1] << endl;
                    break;   
                }
            case 4:
                if(prog.size() > 0){
                    prog.pop_back();
                }
                break;
        }
    }
    
    return 0;
}
