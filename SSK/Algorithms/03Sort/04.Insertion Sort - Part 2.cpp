#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
void insertionSort(int ar_size, int *  ar) {
    for(int i=0;i<ar_size-1;i++){
        if(ar[i]>ar[i+1]){
            int temp=ar[i+1];
            for(int j=0;j<i+1;j++){
                if(temp<ar[j]){
                    for(int k=i+1;k>j;k--){
                        ar[k]=ar[k-1];
                    }
                    ar[j]=temp;
                    break;
                }
            }
        }
         for(int j=0;j<ar_size;j++){
             cout<<ar[j]<<" ";

         }
        cout<<endl;        
    }
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
