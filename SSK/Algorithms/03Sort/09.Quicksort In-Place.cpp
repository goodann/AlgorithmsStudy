#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void partition(vector<int>&arr,int begin,int end){
    int pivot=arr[end-1];
    int left=begin;
    int right=begin+1;
    if(end-begin<2){
        return;
    }    
    for(int i=begin;i<end-1;i++){
        if(arr[i]<pivot)
            left++;
        else{
            right=left+1;
            while(right<end-1 && arr[right]>pivot){
                right++;
            }
            if(right==end-1){
                break;
            }
            int temp = arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
        }
    }
    arr[end-1]=arr[left];
    arr[left]=pivot;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    partition(arr,begin,left);
    
    partition(arr,left+1,end);
    
    
    
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    partition(arr,0,arr.size());
    return 0;
}
