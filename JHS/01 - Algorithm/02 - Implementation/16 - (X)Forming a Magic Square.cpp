#include <bits/stdc++.h>

using namespace std;

int main() {
    vector< vector<int> > s(3,vector<int>(3));
    for(int s_i = 0;s_i < 3;s_i++){
       for(int s_j = 0;s_j < 3;s_j++){
          cin >> s[s_i][s_j];
       }
    }
    //  Print the minimum cost of converting 's' into a magic square
    int total = 0;
    
    int i[3] = {0};
    int j[3] = {0};
    
    for(int s_i = 0;s_i < 3;s_i++){
       for(int s_j = 0;s_j < 3;s_j++){
           if(s_i==0){
               i[0] += s[s_i][s_j];
           }
           if(s_i==1){
               i[1] += s[s_i][s_j];
           }
           if(s_i==2){
               i[2] += s[s_i][s_j];
           }
           if(s_j==0){
               j[0] += s[s_i][s_j];
           }
           if(s_j==1){
               j[1] += s[s_i][s_j];
           }
           if(s_j==2){
               j[2] += s[s_i][s_j];
           }
       }
    }
    
    /*
    for(int s_i = 0;s_i < 3;s_i++){
       for(int s_j = 0;s_j < 3;s_j++){
           if(i[s_i] != 15 && j[s_j] != 15){
               int diff = 0;
               if(abs(i[s_i] - 15) < abs(j[s_j] - 15)){
                   
                   if(i[s_i] < 15){
                       diff = 15 - i[s_i];
                       i[s_i] += diff;
                       j[s_j] += diff;
                       s[s_i][s_j] += diff;
                       total += diff;
                   }else{
                       diff = i[s_i] - 15;
                       i[s_i] -= diff;
                       j[s_j] -= diff;
                       s[s_i][s_j] -= diff;
                       total -= diff;
                   }
                   
               }else{
                   
                   if(j[s_j] < 15){
                       diff = 15 - j[s_j];
                       i[s_i] += diff;
                       j[s_j] += diff;
                       s[s_i][s_j] += diff;
                       total += diff;
                   }else{
                       diff = j[s_j] - 15;
                       i[s_i] -= diff;
                       j[s_j] -= diff;
                       s[s_i][s_j] -= diff;
                       total -= diff;
                   }
               }
           }
       }
    }
    */
    
    int i_diff = 0;
    int j_diff = 0;
    for(int ij_i=0; ij_i<3; ij_i++){
        if(i[ij_i] != 15){
            if(i[ij_i]<15){
                i_diff += 15 - i[ij_i];
            }else{
                i_diff += i[ij_i] - 15;
            }
        }
        
        if(j[ij_i] != 15){
            if(j[ij_i]<15){
                j_diff += 15 - j[ij_i];
            }else{
                j_diff += j[ij_i] - 15;
            }
        }
    }
    if(i_diff > j_diff){
        total = i_diff;
    }else{
        total = j_diff;
    }
    
    cout << total;
    
    return 0;
}
