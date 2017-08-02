#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swapNumber(vector<int>& A,int a,int b){
    int tmp = A[a];
    A[a] = A[b];
    A[b] = tmp;
}

void heapify(vector<int>& A, int i){
    int l = i * 2;
    int r = i * 2 +1;
    int smallest;
    if( l < A.size() && A[l] < A[i]){
        smallest = l;
    }
    else{
        smallest = i;
    }
    if(r < A.size() && A[r] < A[smallest]){
        smallest = r;
    }
    if( smallest != i){
        swapNumber(A,i,smallest);
        heapify(A,smallest);
    }
}

void insertElement(vector<int>& A){
    int parent , child;
    
    child = A.size()-1;
    parent = child / 2;
    while( child > 1){
        if( A[parent] > A[child]){
            swapNumber(A,child,parent);
            child = parent;
            parent = child  / 2;    
        }
        else{
            break;
        }
    }
}

void deleteElement(vector<int>& A){
    A[1]=A.back();
    A.pop_back();
    heapify(A,1);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,K,count =0;
    cin >>N >>K;
    
    vector<int> heap(1);

    for(int i = 0 ; i <N ; i++){
        int num;
        cin >>num;
        heap.push_back(num);
        insertElement(heap);
    }
    
    int first,second,newChocolate;
    while (heap[1] < K){
        if( heap.size() == 2){
            count = -1;
            break;
        }
        first = heap[1];
        deleteElement(heap);
        second = heap[1];
        deleteElement(heap);
        
        newChocolate= first + 2 * second;
        
        heap.push_back(newChocolate);
        insertElement(heap);
        count++;
    }
    
    cout << count;
    return 0;
}
