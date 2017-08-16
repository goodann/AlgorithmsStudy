#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;
    
    string hour[12] ={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve"};
    string ten[10] ={"ten","eleven","twelve","thirteen","fourteen","quarter","sixteen","seventeen","eighteen","nineteen"};
    string timeWord;
    
    if( m == 0){
        timeWord = hour[h-1] + " o' clock";
    }
    else if( m>0 && m < 10){
        timeWord = hour[m-1];
        if( m == 1){
            timeWord += " minute";
        }
        else {
            timeWord += " minutes";
        }
        timeWord += " past " + hour[h-1];
    }
    else if( m>= 10 && m < 20){
        timeWord = ten[m%10];
        if( m == 15){
             timeWord += " past "+ hour[h-1] ;  
        }
        else{
             timeWord += " minutes past "+ hour[h-1] ;
        }
    }
    else if ( m >= 20 && m < 30){
        if( m == 20){
            timeWord = "twenty";
        }
        else{
            timeWord = "twenty " + hour[m%10-1];
        }
        timeWord += " minutes past "+hour[h-1];
    }
    else if( m>= 30 && m < 40){
        if( m == 30){
            timeWord = "half past " +hour[h-1];
        }
        else{
             timeWord ="twenty " + hour[m%10-1] +" minutes to "+ hour[h] ;
        }
    }
    else if ( m >= 40 && m < 50){
        if( m == 45){
             timeWord += "quarter to "+ hour[h] ;  
        }
        else{
            
             timeWord =ten[(60 - m) %10] +" minutes to "+ hour[h] ;
        }
    }
    else{
        timeWord = hour[(60 - m) %10-1];
        if( m == 1){
            timeWord += " minute";
        }
        else {
            timeWord += " minutes";
        }
        timeWord +=" to "+ hour[h] ;
    }
    
    
    cout<<timeWord;
    return 0;
}
