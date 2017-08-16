#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int countSwap1 = 0;
int countSwap2 = 0;


void swapArray(vector<int>& arr, int a,int b){
    if ( a == b){
        return;
    }
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}


int partition(vector<int> &arr,int p,int r){
    int x = arr[r];
    int i = p;
    for(int j = p; j < r ; j++){
        if ( arr[j] <= x){
            swapArray(arr,i,j);
            i = i +1;
            countSwap1++;
        }
    }
    swapArray(arr,i,r);
    countSwap1++;
    return i;
}

void quickSort(vector <int> &arr,int p,int r) {
   // Complete this function
    int q;
    if ( p< r){
        q = partition(arr,p,r);
        quickSort(arr,p,q-1);
        quickSort(arr,q+1,r);  
    }

    
}

void insertionSort(vector<int>& arr) {
    int i,j;
    int value;
    int N = arr.size();
    for(i=1;i<N;i++)
    {
        value=arr[i];
        j=i-1;
        while(j>=0 && value<arr[j])
        {
            arr[j+1]=arr[j];
            countSwap2++;
            j=j-1;
        }
        arr[j+1]=value;
    }
}

int main()
{
    int n;
    cin >> n;

    vector <int> arr(n),arr2;
    
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    arr2=arr;
    
    quickSort(arr,0,arr.size()-1);
    insertionSort(arr2);
    cout<<countSwap2- countSwap1<<endl;

    return 0;
}
