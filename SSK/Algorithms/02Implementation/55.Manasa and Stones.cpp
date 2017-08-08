#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,n;
    int a,b;
    cin>>T;
    
    for(int i=0;i<T;i++){
        cin>>n>>a>>b;
        vector<int> vec;
        if(a>b){
            int temp=b;
            b=a;
            a=temp;
        }
            
        for(int j=0;j<n;j++){
            int stone=0;
            for(int l=0;l<n-1;l++){
                if(l<n-1-j)
                    stone+=a;
                else
                    stone+=b;
            }
            bool overlap=false;
            for(int l=0;l<vec.size();l++){
                if(vec[l]==stone){
                    overlap=true;
                    break;
                }
            
            }
            if(!overlap)
                vec.push_back(stone);
        }
        for(int j=0;j<vec.size();j++)
            cout<<vec[j]<<" ";
        cout<<endl;
    }
    return 0;
}
