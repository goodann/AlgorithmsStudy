#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string s;
    cin >> s;
    int L = s.size();
    int floorL = floor(sqrt(L));
    int ceilL = ceil(sqrt(L));
    int rows,columns;
    vector<string> strings;

    int flag=1;
    for(int i = floorL ; i <= ceilL ; i++){ //rows, columns 구하기
        for(int j = i ; j <= ceilL; j++){
            if(!flag){
              break;
            }
            if(i * j >= L){
                rows=i;
                columns=j;
                flag=0;
                break;
            }
        }

    }
    
    int start=0;

    for(int i = 0 ; i < rows; i++){     // 값 자르기
        strings.push_back(s.substr(start,columns ));
        start +=columns;
    }
    
    for(int i = 0 ; i < columns; i++){  //출력
        for(int j= 0 ; j < rows;j++){
            if( i < strings[j].size()){
                cout<<strings[j][i];
            }
        }
        cout<<" ";
    }
    
    return 0;
}
