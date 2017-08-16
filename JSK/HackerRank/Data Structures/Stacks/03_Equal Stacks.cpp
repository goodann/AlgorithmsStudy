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

int getHeight(vector<int> v){
    int sum=0;
    for(int i = 0 ; i < v.size() ; i++){
        sum+= v[i];
    }
    return sum;
}
int getHighestIndex(int topValue1,int topValue2,int topValue3){
    if(topValue1 > topValue2){
        if( topValue1 > topValue3){
            return 1;
        }
        else {
            return 3;
        }
    }
    else if( topValue2 > topValue3){
        return 2;
    }
        return 3;
}

void makeSameHeight(vector<int> h1, vector<int> h2, vector<int> h3){
    int height[4] ={0,getHeight(h1),getHeight(h2),getHeight(h3)};
    int index,topValue;

    while(!(height[1] == height[2] && height[1] ==height[3] && height[2] == height[3])){
        index=getHighestIndex(height[1],height[2],height[3]);
        if (index ==1){
            topValue=h1[0];
            h1.erase(h1.begin());
            height[1]-=topValue;
        }
        else if (index == 2){
            topValue=h2[0];
            h2.erase(h2.begin());
            height[2]-=topValue;
        }
        else{
            topValue=h3[0];
            h3.erase(h3.begin());
            height[3]-=topValue;
        }

    }
    cout<<height[1];
}

int main(){
    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;
    vector<int> h1(n1);
    for(int h1_i = 0;h1_i < n1;h1_i++){
       cin >> h1[h1_i];
    }
    vector<int> h2(n2);
    for(int h2_i = 0;h2_i < n2;h2_i++){
       cin >> h2[h2_i];
    }
    vector<int> h3(n3);
    for(int h3_i = 0;h3_i < n3;h3_i++){
       cin >> h3[h3_i];
    }
    makeSameHeight(h1,h2,h3);
    
    return 0;
}
