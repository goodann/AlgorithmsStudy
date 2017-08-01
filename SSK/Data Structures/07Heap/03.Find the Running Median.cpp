#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
void heapifyMin(vector<int>& heap,int index);
void heapifyMax(vector<int>& heap,int index);
void isHeapMin(vector<int>& heap,int index);
void isHeapMax(vector<int>& heap,int index);
void insertNode(vector<int>& heap,int data,bool minMax);
void removeNode(vector<int>& heap,int data,bool minMax);
void printHeap(vector<int>& heap);

void heapifyMin (vector<int>& heap,int index){
    int i=index;
    int left=(i*2);
    int right=(i*2)+1;
    int min=index;
    
    if(left< heap.size() && heap[left]<heap[index]){
        min=left;
    }
    if(right<heap.size() && heap[right]<heap[min]){
        min=right;
    }
    if(min!=index){
        int temp=heap[min];
        heap[min]=heap[index];
        heap[index]=temp;
        heapifyMin(heap,min);
    }    
}

void heapifyMax (vector<int>& heap,int index){
    int i=index;
    int left=(i*2);
    int right=(i*2)+1;
    int min=index;
    
    if(left< heap.size() && heap[left]>heap[index]){
        min=left;
    }
    if(right<heap.size() && heap[right]>heap[min]){
        min=right;
    }
    if(min!=index){
        int temp=heap[min];
        heap[min]=heap[index];
        heap[index]=temp;
        heapifyMax(heap,min);
    }    
}

void isHeapMin(vector<int>& heap,int index){
    int i=index;
    while(i>1){
        if(heap[i/2]>heap[i]){
            int temp=heap[i];
            heap[i]=heap[i/2];
            heap[i/2]=temp;
        }
        i/=2;
    }
}

void isHeapMax(vector<int>& heap,int index){
    int i=index;
    while(i>1){
        if(heap[i/2]<heap[i]){
            int temp=heap[i];
            heap[i]=heap[i/2];
            heap[i/2]=temp;
        }
        i/=2;
    }
}


void insertNode(vector<int>& heap,int data,bool minMax){
    heap.push_back(data);
    if(minMax)
        isHeapMax(heap,heap.size()-1);
    else
        isHeapMin(heap,heap.size()-1);
    
}
int removeNode(vector<int>& heap,bool minMax){
    int data=heap[1];
    heap[1]=heap.back();
    heap.pop_back();
    if(minMax)
        heapifyMax(heap,1);
    else
        heapifyMin(heap,1);
    return data;
}

void printHeap(vector<int>& heap){
    for(long i=1;i<heap.size();i++){
        cout<<heap[i]<<",";
    }
    
    cout<<endl;
}


using namespace std;
int main() {
    
    int n;
    vector<int> arr;
    cin>>n;
    vector<int> minHeap(1);
    vector<int> maxHeap(1);
    for(int i=0;i<n;i++){
        vector<int> sorted;
        int input;
        cin>>input;
        arr.push_back(input);
        
        int size=i+1;
        //insertNode(heap,arr[i]);
        
        if(maxHeap.size()==1 || maxHeap[1]>input){
            insertNode(maxHeap,input,true);
        }else{
            insertNode(minHeap,input,false);
        }
        int minHeapSize=minHeap.size();
        int maxHeapSize=maxHeap.size();
        if((minHeapSize-maxHeapSize)>0){
            insertNode(maxHeap,removeNode(minHeap,false),true);
        }
        if((maxHeapSize-minHeapSize)>1){
            insertNode(minHeap,removeNode(maxHeap,true),false);
        }
        if((size%2)){
            cout<<(float)maxHeap[1]<<endl;
        }else{
            cout<<(maxHeap[1]+minHeap[1])/2.0<<endl;
        }
        
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
