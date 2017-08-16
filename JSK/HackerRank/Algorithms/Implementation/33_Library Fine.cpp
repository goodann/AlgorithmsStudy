#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int d1;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;
    
    int Hackos = 0;
    
    if( y2 < y1){
        Hackos = 10000;    
    }
    else if (y2 == y1){
        if (m1 > m2){
          Hackos = (m1 - m2) * 500;
        }
        else if (m1 == m2){
            if( d1 > d2){
                Hackos = (d1 - d2) * 15;
            }
        }
    }
    
    cout<<Hackos;
    
    return 0;
}
