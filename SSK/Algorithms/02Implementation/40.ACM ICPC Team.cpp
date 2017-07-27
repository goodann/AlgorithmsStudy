#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<string> topic(n);
    for(int topic_i = 0;topic_i < n;topic_i++){
       cin >> topic[topic_i];
    }
    int max=0;
    int count=0;
    int topics=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            topics=0;
            for(int k=0;k<m;k++){
                if(topic[i][k]=='1' || topic[j][k]=='1'){
                    topics++;
                }
                    
            }
            if(topics>max){
                max=topics;
                count=1;
            }else if(topics==max){
                count++;
            }
        }
    }
    cout<<max<<endl<<count<<endl;
    
    return 0;
}
