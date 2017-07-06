#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define SEQ(x,lastAnswer,N) (((x)^(lastAnswer))%(N))

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int lastAnswer=0,numOfSequence,numOfQuery;
    int type, num1,num2;
    cin >> numOfSequence;
    cin >> numOfQuery;
    
    vector< vector<int> > seqList(numOfSequence,vector<int>(0));

    for(int i = 0 ; i < numOfQuery; i++){
        cin >>type;
        cin >> num1;
        cin >> num2;
        
        int seq=SEQ(num1,lastAnswer,numOfSequence);
        if( type == 1){
            seqList[seq].push_back(num2);
        }
        else if ( type ==2 ){
            lastAnswer=seqList[seq][num2%seqList[seq].size()];
            cout <<lastAnswer<<endl;
        }
    }
    
    return 0;
}
