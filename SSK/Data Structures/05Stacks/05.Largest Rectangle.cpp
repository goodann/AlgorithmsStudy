#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int usingDP(int n,vector<int> arr);
int usingStack(int n,vector<int> arr);
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=usingStack(n,arr);
    cout<<result<<endl;
    return 0;
}
//timeout
int usingDP(int n,vector<int> arr){
    int DPMax=-2100000000;
    
    
    vector<int>DP(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0){
                if(arr[j]<=arr[i]){
                    DP[j]=arr[j];
                }
            }else{
                if(arr[j]<=arr[i]){
                    DP[j]+=arr[j];
                    if(DPMax<DP[j])
                        DPMax=DP[j];
                }else{
                    DP[j]=0;
                }
            }
        }
    }
    /*
    vector<vector<int>> DP(n,vector<int>(n));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0){
                if(arr[j]<=arr[i]){
                    DP[i][j]=arr[j];
                }
            }else{
                if(arr[j]<=arr[i]){
                    DP[i][j]=DP[i-1][j]+arr[j];
                    if(DPMax<DP[i][j])
                        DPMax=DP[i][j];
                }else{
                    DP[i][j]=0;
                }
            }
        }
    }
    */
    /*
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<DP[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    //cout<<DPMax<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return DPMax;
}
int usingStack(int n,vector<int> arr){
    vector<int> vec;
    int area;
    int maxArea=-2100000000;
    int top=0;
    int i=0;
    while(i<n){
        if(vec.empty() || arr[i]>=arr[vec.back()]){
            vec.push_back(i++);
        }
        else{
            
            top=vec.back();
            vec.pop_back();
            if(vec.empty())
            {
                area=arr[top]*i;
            }
            else{
                
                area=arr[top]*(i-vec.back()-1);
            }
            if(maxArea<area)
                maxArea=area;
        }
    }
    while(!vec.empty()){
        top=vec.back();
        vec.pop_back();
        if(vec.empty())
        {
            area=arr[top]*i;
        }
        else{
            area=arr[top]*(i-vec.back()-1);
        }
        if(maxArea<area)
            maxArea=area;
    }
    return maxArea;
    
}
