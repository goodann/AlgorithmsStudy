#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >>t;
    for(int i=0;i<t;i++){
        string w;
        cin>>w;
        string result(w);
        int size=result.size();
        int j=size-1;
        while(result[j]<=result[j-1] && j>0){
            j--;
        }
        if(j!=0){
            j--;
            for(int l=size-1;l>j;l--){
                if(result[l]>result[j]){
                    char temp=result[l];
                    result[l]=result[j];
                    result[j]=temp;
                    break;
                }            
            }
            j++;
            int l=size-1;
            while(j<l){
                char temp=result[j];
                result[j]=result[l];
                result[l]=temp;
                j++;
                l--;
            }
        }
        if(result==w)
            cout<<"no answer"<<endl;
        else
            cout<<result<<endl;
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
