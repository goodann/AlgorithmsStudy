#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(int N, int arr[]) {
    int i,j;
    int value;
    int count=0;
    for(i=1;i<N;i++)
    {
        value=arr[i];
        j=i-1;
        while(j>=0 && value<arr[j])
        {
            arr[j+1]=arr[j];
            count++;
            j=j-1;
        }
        arr[j+1]=value;
    }
    cout<<count<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int N;
    scanf("%d", &N);
    int arr[N], i;
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(N, arr);
    return 0;
}
