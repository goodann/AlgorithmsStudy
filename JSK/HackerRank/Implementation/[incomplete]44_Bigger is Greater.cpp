#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swapString(string& s, int index1, int index2){
    char tmp = s[index1];
    s[index1]=s[index2];
    s[index2]=tmp;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    string w;
    
    int index;
    for(int t_i = 0 ; t_i < t ; t_i++){
        cin >> w;
        int flag = 0;
        index= w.size()-1;
        for(int i = w.size()-2 ; i >= 0; i--){
            if( w[index] > w[i]){
                index=i;
                flag=1;
                break;
            }
        }
        if( index == w.size()-1){
            for(int i = 0 ; i < w.size()-1; i++){
                for(int j = i+1 ; j < w.size(); j++){
                    if( w[i] != w[j]){
                        flag=1;
                        break;
                    }
                }
                if( flag){
                    break;
                }
            }
            if( flag){
               index =0;
                char min = 'z'+1;
                for(int j= 1 ; j < w.size(); j++){
                    if( w[0] < w[j] &&  w[j] <min ){
                        index =  j;
                        min= w[index];
                    }
                }
                if(index != 0){
                    swapString(w,0,index);

                    for(int i = 1 ; i < w.size()-1; i++){
                        for(int j = i+1 ; j < w.size(); j++){
                            if( w[i] > w[j]){
                                swapString(w,i,j);
                            }
                        }
                    }
                }
                else{
                    flag=0;
                }
                
            }
        }
        else{
            swapString(w,index,w.size()-1);
            for(int i = index+1 ; i < w.size()-1; i++){
                for(int j = i+1 ; j < w.size(); j++){
                    if( w[i] > w[j]){
                        swapString(w,i,j);
                    }
                }
            }
        }
        if(!flag){
            cout<<"no answer"<<endl;
        }
        else{
            cout<<w<<endl;
        }
    }
    
    
    return 0;
}
