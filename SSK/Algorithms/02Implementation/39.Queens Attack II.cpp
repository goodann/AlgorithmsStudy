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
    int n;
    int k;
    cin >> n >> k;
    int yQueen;
    int xQueen;
    cin >> yQueen >> xQueen;
    int big;
    int small;
    big=(yQueen<xQueen)?xQueen:yQueen;
    small=(yQueen>xQueen)?xQueen:yQueen;
    int east=n-xQueen;
    int west=xQueen-1;
    int south=yQueen-1;
    int north=n-yQueen;
    
    int ne=n-big;
    int nw=(xQueen-1>(n-yQueen))?(n-yQueen):xQueen-1;
    int se=((n-xQueen)>yQueen-1)?yQueen-1:n-xQueen;
    int sw=small-1;
    
    for(int a0 = 0; a0 < k; a0++){
        int yObstacle;
        int xObstacle;
        cin >> yObstacle >> xObstacle;
        int r=yObstacle-yQueen;
        int c=xObstacle-xQueen;
        if(yQueen-xQueen == yObstacle-xObstacle){
            if(r>0 && c>0){
                r--;
                if(ne>r){
                    ne=r;
                }
            }
            if(r<0 && c<0){
                r++;
                if(sw>abs(r)){
                    sw=abs(r);
                }
            }
        }else if(yQueen+xQueen == yObstacle+xObstacle){
            
            if(r>0 && c<0){
                r--;
                if(nw>r){
                    nw=r;
                }
            }
            if(r<0 && c>0){
                r++;
                if(se>abs(r)){
                    se=abs(r);
                }
            }
        }
        else{
            if(r==0 && c>0){
                c--;
                if(east>c){
                    east=c;
                }
            }
            if(r==0 && c<0){
                c++;
                if(west>abs(c)){
                    west=abs(c);
                }
            }
            if(r>0 && c==0){
                r--;
                if(north>r){
                    north=r;
                }
                
            }
            if(r<0 && c==0){
                r++;
                if(south>abs(r)){
                    south=abs(r);
                }
                
            }
        }
    }
    cout<<east+west+south+north+ne+nw+se+sw<<endl;
    
    return 0;
}
