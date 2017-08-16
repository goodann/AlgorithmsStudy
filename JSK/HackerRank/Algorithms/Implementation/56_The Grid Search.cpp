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
        int flag1=0,flag2=0;
        for(int i = 0 ; i <= R-r; i++){
            for(int j = 0 ; j <= C-c; j++){
                if( G[i][j] == P[0][0]){
                    int k,l;
                    for(k = 0 ; k < r; k++){
                        for( l = 0 ; l < c; l++){
                            flag2=0;
                            if( G[i+k][j+l] != P[k][l]){
                                flag2=1;
                                break;
                            }
                        }
                        if(flag2){
                            break;
                        }
                    }
                    if(k == r && l == c){
                        flag1=1;
                        break;
                    }
                }
                if(flag1){
                    break;
                }
            }
            if(flag1){
                break;
            }
        }

        if( flag1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
