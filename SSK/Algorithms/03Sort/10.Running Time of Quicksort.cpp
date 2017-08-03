#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void partition(vector<int>&arr,int begin,int end,int& count){
    int pivot=arr[end-1];
    int left=begin;
    int right=begin+1;
    if(end-begin<2){
        return;
    }    
    for(int i=begin;i<end-1;i++){
        
        if(arr[i]<pivot){
            left++;
            count++;
        }
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
            count++;
        }
    }
    arr[end-1]=arr[left];
    arr[left]=pivot;
    count++;
    partition(arr,begin,left,count);
    
    partition(arr,left+1,end,count);
    
    return;
    
}
int insertionSort(int ar_size, vector<int>&  ar) {
    int count=0;
    for(int i=0;i<ar_size-1;i++){
        
        if(ar[i]>ar[i+1]){
            
            int temp=ar[i+1];
            for(int j=0;j<i+1;j++){
                if(temp<ar[j]){
                    for(int k=i+1;k>j;k--){
                        ar[k]=ar[k-1];
                       count++;
                    }
                    ar[j]=temp;
                    break;
                }
            }            
        }
    }
    return count;
    //cout<<count<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> arr2(arr);
    int count=0;
    partition(arr,0,arr.size(),count);
    int count2=0;
    count2=insertionSort(n,arr2);
    cout<<count2-count<<endl;
    //cout<<count2<<","<<count<<endl;
    return 0;
}