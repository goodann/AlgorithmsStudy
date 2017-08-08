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
    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        int n;
        cin >> n;
        string b;
        cin >> b;
        if(b.find('_')!=string::npos){
            if(b[0]=='_'){
                for(int k=1;k<n;k++){
                    if(b[k]!='_'){
                        b[0]=b[k];
                        b[k]='_';
                        break;
                    }
                }
            }
            for(int i=1;i<n;i++){
                if(b[i-1]==b[i])
                    continue;
                
                if(b[i]=='_'){
                    int j=i+1;
                    for(;j<n;j++){
                        if(b[j]==b[i-1]){
                            b[i]=b[j];
                            b[j]='_';
                            break;
                        }
                    }
                    if(j==n){
                        for(int k=i;k<n;k++){
                            if(b[k]!='_'){
                                b[i]=b[k];
                                b[k]='_';
                                break;
                            }
                        }
                    }
                }else{
                    for(int j=0;j<n;j++){
                        if(b[j]=='_'){
                            
                            b[j]=b[i];
                            b[i]='_';
                        }
                    }
                
                    for(int j=i;j<n;j++){
                        if(b[j]==b[i-1]){
                            b[i]=b[j];
                            b[j]='_';
                            break;
                        }
                    }
                }
            }
        }
        int count=1;
        bool happy=true;
        if(b.size()==1 && b[0]!='_')
            happy=false;
        for(int i=1;i<n;i++){
            if(b[i-1]!=b[i]){
                if(count==1 || (n-i==1 && b[n-1]!='_')){
                    happy=false; 
                    break;
                }
                count=1;


            }else{
                count++;
            }
        }
        if(happy)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}
