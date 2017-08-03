#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr,int p,int r){
    for(int i = p ; i< r;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapArray(vector<int>& arr, int a,int b){
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}


int partition(vector<int> &arr,int p,int r){
    int x = arr[p];
    int i = p;
    for(int j = p+1; j < r ; j++){
        if ( arr[j] <= x){
            i = i +1;
            swapArray(arr,i,j);
            printArray(arr,p,r);

        }
    }
    swapArray(arr,i,p);

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

int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr,0,arr.size());
    return 0;
}
