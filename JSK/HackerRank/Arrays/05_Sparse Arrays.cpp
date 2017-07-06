#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int numOfString,numOfQuery;
    cin >> numOfString;
    vector<string> strings(numOfString);
    
  
 
    for(int i = 0 ; i < numOfString ; i++){
        cin>>strings[i];
    }
      
    cin >> numOfQuery;
    vector<string> queries(numOfQuery);
    for(int i = 0 ; i < numOfQuery ; i++){
        cin>>queries[i];
    }
    
    int count;
    for(int i = 0 ; i < numOfQuery; i++){
        count=0;
        for(int j = 0 ; j < numOfString ; j++){
            if( !strcmp(strings[j].c_str(),queries[i].c_str())){
                count++;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}
