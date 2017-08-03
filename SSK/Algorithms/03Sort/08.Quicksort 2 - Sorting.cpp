#include <bits/stdc++.h>
using namespace std;

void partition(vector<int> &arr,int begin,int end){
    // Complete this function
    
    if(end-begin<=1){
        return;
    }
   
    int left=begin+1;
    int right=begin+2;
    int pivot=arr[begin];
    for(int i=begin+1;i<end;i++){
        if(arr[i]<pivot){
            left++;
        }else{
            right=left+1;
            while(arr[right]>pivot && right<end){
                right++;
            }
            if(right==end){
                continue;
            }
            int temp=arr[right];
            for(int j=right;j>left;j--){
                arr[j]=arr[j-1];
            }
            arr[left]=temp;
            left++;
        }
            
    }
    for(int i=begin;i<left-1;i++)
        arr[i]=arr[i+1];
    arr[left-1]=pivot;
    
    partition(arr,begin,left-1);
    partition(arr,left,end);
    
    for(int i=begin;i<end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  
    
}


void quickSort(vector <int> &arr) {
   partition(arr,0,arr.size());
}

int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr);

    return 0;
}
