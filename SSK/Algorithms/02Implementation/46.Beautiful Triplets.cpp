#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin>>n;
    int d;
    cin>>d;
    vector<int> a(n);
    int count=0;
    for(int i=0;i<n;i++)
        cin>>a[i];   
    for(int i=0;i<n-1;i++){
        bool jfind=false;
        int aj=0;
        for(int j=i+1;j<n;j++){
            if(jfind && a[j]-aj==d){
                count++;
                break;
            }
            if(a[j]-a[i]==d){
                jfind=true;
                aj=a[j];
            }
            
        }
    }
    
    cout<<count<<endl;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */     
    return 0;
}