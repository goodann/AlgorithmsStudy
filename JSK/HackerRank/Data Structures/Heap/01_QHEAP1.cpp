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

void deleteElement(vector<int>& A,int num){
    for(int i =1 ;i < A.size(); i++){
        if( A[i] == num){
            A[i]=A.back();
            A.pop_back();
            heapify(A,i);
            break;
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,Q,num;
    cin >>N;
    
    vector<int> A(1);
    
    for(int i = 0 ; i < N; i++){
        cin >>Q;
        switch(Q){
            case 1:     //insert
                cin >> num;
                A.push_back(num);
                insertElement(A);
                break;
            case 2:     //delete  
                cin >> num;
                deleteElement(A,num);
                break;
            case 3:     ///print minimum
                cout << A[1]<<endl;
                break;
        }
    }
    
    return 0;
}
