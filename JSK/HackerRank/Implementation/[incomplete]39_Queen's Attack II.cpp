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

typedef struct pos{
    int x;
    int y;
} Pos;

int cnt=0,N; 
vector<Pos> Set;


bool check(int y,int x){
    if( y > N || y < 1 || x > N || x< 1 ){
        return false;
    }
    for(int i =0 ; i < Set.size() ;i++){
        if( Set[i].x == x && Set[i].y == y){
            return false;
        }
    }
    return true;
}


void recurrence(int y, int x){
    
    
    cnt++;
    
    if(check(y+1,x)){
        recurrence(y+1,x);  
    }
    if(check(y+1,x-1)){
        recurrence(y+1,x-1);
    }
    if(check(y+1,x+1)){
        recurrence(y+1,x+1);    
    }
    if(check(y,x-1)){
        recurrence(y,x-1);
    }
    if(check(y,x+1)){
        recurrence(y,x+1);    
    }/*
    if(check(y-1,x-1)){
        recurrence(y-1,x-1);
    }
    if(check(y-1,x)){
        recurrence(y-1,x);
    }
    if(check(y-1,x+1)){
        recurrence(y-1,x+1);
        
    }*/
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    int rQueen;
    int cQueen;
    cin >> rQueen >> cQueen;
    
    N=n;
    vector<Pos> set;
    Pos pos;
    for(int a0 = 0; a0 < k; a0++){
        int rObstacle;
        int cObstacle;
        cin >> rObstacle >> cObstacle;
        // your code goes here
        pos.x = rObstacle;
        pos.y = cObstacle;
        
        set.push_back(pos);
    }
    
   Set=set;
   recurrence(rQueen, cQueen);
    
    cout<<cnt;
    return 0;
}
