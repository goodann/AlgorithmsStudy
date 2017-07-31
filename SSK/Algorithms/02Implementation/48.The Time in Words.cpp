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
    string mWord;
    string hWord;
    string toPast;
    vector<string> numbers={"one","two","three","four","five","six","seven","eight","nine","ten",
                        "eleven","twelve","thirteen"};
    if(m==0){
        cout<<numbers[h-1]<<" o' clock"<<endl;
    }else if(m==1){
        cout<<"one minite past "<<numbers[h-1]<<endl;
    }
    else{
        int m2;
        if(m>30){
            hWord=numbers[h%12];
            toPast="to ";
            m2=60-m;
        }else{
            hWord=numbers[(h-1)%12];
            
            toPast="past ";
            m2=m;
        }
        if(m2<14){
            mWord=numbers[(m2-1)];
        }else if(m2<20){
            mWord=numbers[(m2-1)];
            if(mWord.back()=='e'){
                mWord.pop_back();
            }
            mWord+="teen";
        }else{
            mWord="twenty";
            if(m2!=20){
                mWord+=" ";
                mWord+=numbers[(m2%10)-1];
            }
        }
        
        
        mWord+=" minutes ";
        switch(m){
            case 15:
                mWord="quarter ";
                break;
            case 30:
                mWord="half ";
                break;
            case 45:
                mWord="quarter ";
                break;


        }
        cout<<mWord<<toPast<<hWord<<endl;
    }
    
    return 0;
}
