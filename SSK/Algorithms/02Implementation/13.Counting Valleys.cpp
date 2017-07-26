#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    string str;
    cin>>str;
    int current=0;
    int count=0;
    for(int i=0;i<n;i++){
        switch(str[i]){
            case 'U':
                current++;
                if(current==0)
                    count++;
                
                break;
            case 'D':
                current--;
                break;
        }
    }
    cout<<count<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
