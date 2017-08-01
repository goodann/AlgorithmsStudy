#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void heapify (vector<long>& heap,long index);
void isHeap(vector<long>& heap,long index);
void insertNode(vector<long>&heap,long data);
void removeNode(vector<long>&heap,long data);
void printHeap(vector<long>& heap);

void heapify (vector<long>& heap,long index){
    long i=index;
    long left=(i*2);
    long right=(i*2)+1;
    long min=index;
    
    if(left< heap.size() && heap[left]<heap[index]){
        min=left;
    }
    if(right<heap.size() && heap[right]<heap[min]){
        min=right;
    }
    if(min!=index){
        long temp=heap[min];
        heap[min]=heap[index];
        heap[index]=temp;
        heapify(heap,min);
    }    
}

void isHeap(vector<long>& heap,long index){
    long i=index;
    while(i>1){
        if(heap[i/2]>heap[i]){
            long temp=heap[i];
            heap[i]=heap[i/2];
            heap[i/2]=temp;
        }
        i/=2;
    }
}

void insertNode(vector<long>&heap,long data){
    heap.push_back(data);
    isHeap(heap,heap.size()-1);
    
}
void removeNode(vector<long>&heap,long data){
    for(long i=1;i<heap.size();i++){
        if(data==heap[i]){
            heap[i]=heap.back();
            heap.pop_back();
            heapify(heap,i);
            break;
        }
    }
}
void printHeap(vector<long>& heap){
    cout<<heap[1]<<endl;    
}

int main() {
    /* Enter your code here. Read input from STDIN. Prlong output to STDOUT */   
    long q;
    cin>>q;
    vector<long> heap(1);
    for(long i=0;i<q;i++){
        long query;        
        cin>>query;
        long value;
        switch(query){
            case 1:
                cin>>value;
                insertNode(heap,value);
                break;
            case 2:
                cin>>value;
                removeNode(heap,value);
                break;
            case 3:
                printHeap(heap);
                break;
        }
    }
    
    return 0;
}
