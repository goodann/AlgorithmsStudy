#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int q;
    cin >> n >> q;
    vector<int> number(n);
    for(int number_i = 0; number_i < n; number_i++){
       cin >> number[number_i];
    }
    vector<vector<int>> a(q+1);
    vector<vector<int>> b(q+1);
    vector<int> prime(1,2);
    a[0]=number;
    int temp=2;
    prime.push_back(3);
    
    for(int i=prime.size();i<q+1;temp++){
        int sqr=(int)sqrt(temp);
        if(sqr*sqr!=temp){
            for(int j=2;j<=sqr;j++){
                if(temp%j==0){
                    break;
                }
                if(j==sqr){
                    prime.push_back(temp);
                    i++;
                }
            }
        }
            
    }
    for(int i=1;i<=q;i++){
        while(!a[i-1].empty()){
            int top=a[i-1].back();
            if(top%prime[i-1]==0){
                b[i].push_back(top);
                a[i-1].pop_back();
            }else{
                a[i].push_back(top);
                a[i-1].pop_back();
            }
        }
    }
    for(int i=1;i<q+1;i++){
        while(!b[i].empty()){
            cout<<b[i].back()<<endl;
            b[i].pop_back();
        }
    }
    for(int i=1;i<q+1;i++){
        while(!a[i].empty()){
            cout<<a[i].back()<<endl;
            a[i].pop_back();
        }
    }
    return 0;
}
