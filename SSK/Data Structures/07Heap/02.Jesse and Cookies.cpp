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
long removeNode(vector<long>&heap){
    long data=heap[1];
    heap[1]=heap.back();
    heap.pop_back();
    heapify(heap,1);
    return data;
}
void printHeap(vector<long>& heap){
    cout<<heap[1]<<endl;    
}


int main() {
    int n;
    int k;
    cin>>n;
    cin>>k;
    vector<long> heap(1);
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        insertNode(heap,data);
    }
    int sweet=0;
    int count=0;
    while(heap[1]<k && heap.size()>2){
        int first=removeNode(heap);
        int second=removeNode(heap);
        sweet=first+2*second;
        insertNode(heap,sweet);
        count++;
    }
    if(heap[1]>=k)
        cout<<count<<endl;
    else
        cout<<-1<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
