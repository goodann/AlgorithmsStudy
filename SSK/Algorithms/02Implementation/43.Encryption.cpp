#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string s;
    cin >> s;
    int x=sqrt(s.size());
    int y=ceil(sqrt(s.size()));
    while(x*(y-1)>s.size()&&x>y){
        y--;
    }
    while((x*y)<s.size()&&x<y){
        x++;
    }
    
    char result[y][x+1]={0};
   
    for(int i=0;i<y;i++){
        for(int j=0;j<x+1;j++){
            result[i][j]=0;
        }
    }
   
    int i=0;
    int j=0;
    int k=0;
    while(k<s.size()){
        result[i++][j]=s[k++];
        
        if(i>=y){
            j++;
            i=0;
        }
    }
    
    i=0;
    while(i<y){
        cout<<result[i]<<" ";
        
        i++;
    }
    //cout<<x<<","<<y<<endl;
    return 0;
}
