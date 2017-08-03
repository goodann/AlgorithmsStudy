#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(int ar_size, int *  ar) {
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
    cout<<count<<endl;
}
int main(void) {
   
    int _ar_size;
    cin >> _ar_size;
    //scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]); 
    }

   insertionSort(_ar_size, _ar);
   
   return 0;
}