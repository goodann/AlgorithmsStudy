#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void heapify(vector<vector<int>>& heap,int index,int col);
void isHeap(vector<vector<int>>& heap,int index,int col);
void insertNode(vector<vector<int>>& heap,vector<int> data,int col);
vector<int> removeNode(vector<vector<int>>& heap,int col);
void printHeap(vector<int>& heap,int col);

void heapify (vector<vector<int>>& heap,int index,int col){
    int i=index;
    int left=(i*2);
    int right=(i*2)+1;
    int min=index;
    
    if(left< heap.size() && heap[left][col]<heap[index][col]){
        min=left;
    }
    if(right<heap.size() && heap[right][col]<heap[min][col]){
        min=right;
    }
    if(min!=index){
        vector<int> temp=heap[min];
        heap[min]=heap[index];
        heap[index]=temp;
        heapify(heap,min,col);
    }    
}

void isHeap(vector<vector<int>>& heap,int index,int col){
    int i=index;
    while(i>1){
        if(heap[i/2][col]>heap[i][col]){
            vector<int> temp=heap[i];
            heap[i]=heap[i/2];
            heap[i/2]=temp;
        }
        i/=2;
    }
}

void insertNode(vector<vector<int>>& heap,vector<int> data,int col){
    heap.push_back(data);
    isHeap(heap,heap.size()-1,col);
    
}
vector<int> removeNode(vector<vector<int>>& heap,int col){
    vector<int> data=heap[1];
    heap[1]=heap.back();
    heap.pop_back();
    heapify(heap,1,col);
    return data;
}

void printHeap(vector<vector<int>>& heap,int col){
    for(long i=1;i<heap.size();i++){
        cout<<heap[i][col]<<",";
        
    }
    
    cout<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<vector<int>> sortedTime(1);
    vector<vector<int>> time(n,vector<int>(2));
    long nowTime;
    long waitTime=nowTime;
    vector<vector<int>> proQueue(1);
    
    for(int i=0;i<n;i++){
        cin>>time[i][0]>>time[i][1];
        vector<int> current(2);
        current[0]=time[i][0];
        current[1]=i;
        insertNode(sortedTime,current,0);
    }
    if(sortedTime.size()>1)
        nowTime=sortedTime[1][0];
    
    while(sortedTime.size()>1 || proQueue.size()>1){
        while(sortedTime[1][0]<=nowTime && sortedTime.size()>1){
            vector<int> current=removeNode(sortedTime,0);
            
            vector<int> currentTime;
            if(current.size()==2){
                currentTime=time[current[1]];
                insertNode(proQueue,currentTime,1);
            }
        }
        if(proQueue.size()>1){
            vector<int> current=removeNode(proQueue,1);
            if(current.size()==2){
                nowTime+=current[1];
                waitTime+=nowTime-current[0];
            }
        }else{
            nowTime=sortedTime[1][0];
        }
    }
    cout<<waitTime/n<<endl;
    
    return 0;
}
