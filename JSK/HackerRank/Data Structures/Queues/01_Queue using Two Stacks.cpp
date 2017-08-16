#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q,type;
    vector<int> queue,stack;
    
    cin>>q;
    
   for(int i = 0 ; i < q ; i++){
       cin>>type;
       if( type == 1){
           int num;
           cin >>num;
           queue.push_back(num);
       }
       else if ( type == 2 ){

           if( queue.size() == 1){
               queue.pop_back();
           }
           else{
               int qSize=queue.size();
               for(int j = 0 ; j < qSize-1; j++){
                   int pop = queue.back();
                   queue.pop_back();
                   stack.push_back(pop);
               }
               queue.pop_back();
               int sSize=stack.size();
               for(int j = 0 ; j < sSize; j++){
                   int pop = stack.back();
                   stack.pop_back();
                   queue.push_back(pop);
               }
           }
       }
       else if ( type == 3){
           cout<<queue.front()<<endl;
       }
   }
    
    return 0;
}
