#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0; G_i < R; G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0; P_i < r; P_i++){
           cin >> P[P_i];
        }
        bool find=false;
        for(int i=0;i<=R-r;i++){
            find=false;
            int startX=G[i].find(P[0]);
            for(int m=startX;m<=C-c;m++){
                if(startX!=string::npos){
                    find=true;
                    
                    for(int j=0;j<r && find;j++){
                        for(int k=0;k<c && find;k++){
                            //cout<<j+i<<","<<k+m<<endl;
                            if(G[j+i][k+m] != P[j][k]){
                                find=false;
                            }

                        }
                    }
                    if(find)
                        break;
                }
            }
            if(find)
                break;
            
        }
        if(find)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
