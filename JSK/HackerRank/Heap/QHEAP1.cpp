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

void print(vector<int> A){
    for(int i = 1; i < A.size(); i++){
        cout<<A[i]<<" ";
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

void deleteHeap(vector<int>& A){
    
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
                print(A);
                cout<<endl;
                break;
            case 2:     //delete  
                cin >> num;
                A.push_back(num);
                deleteElement(A);
                break;
            case 3:     ///print minimum
                cout << A[1];
                break;
        }
    }
    
    return 0;
}
