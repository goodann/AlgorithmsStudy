#include <bits/stdc++.h>

using namespace std;

vector<int> getPrime(int i){
    vector<int> prime;
    int number,j;
    
    prime.push_back(2);
    if (i == 1){
        return prime;
    }
    prime.push_back(3);
    if ( i == 2){
        prime.push_back(3);
        return prime;
    }
    
    for( number = 5 ; ; number+=2){
        int flag=0;
        for( j= 3; j <= sqrt(number); j+=2  ){
            if( number %j ==0){
                flag=1;
                break;
            }
        }
        if( flag== 0 ){
            if( prime.size() == i ){
                break;
            }
            else{
                prime.push_back(number);
            }
        }
    }
    return prime;
}

int main() {
    int n;
    int q;
    int prime;
    vector< vector<int> > A,B;
    cin >> n >> q;
    vector<int> number(n),tmp,primeVector;
    for(int number_i = 0; number_i < n; number_i++){
       cin >> number[number_i];
    }
    A.push_back(number);
    B.push_back(tmp);

    primeVector=getPrime(q);
    
    for(int i = 0 ; i < q ; i++){
        vector<int> tmp1,tmp2;
        A.push_back(tmp1);
        B.push_back(tmp2);
        int sizeA=A[i].size();
        for(int j = 0 ; j <sizeA ; j++){
            int top = A[i].back();
            A[i].pop_back();          
            
            prime=primeVector[i];
            if( top % prime == 0  ){
                B[i+1].push_back(top);
            }
            else{
                A[i+1].push_back(top);
            }
        }
          
    }
    
    for(int i = 1 ; i < B.size(); i++){
        for(int j =  B[i].size()-1 ; j >=0; j--){
            cout<<B[i][j]<<endl;
        }
    }
    
    for(int j =  A[A.size()-1].size()-1 ; j >=0; j--){
        cout<<A[A.size()-1][j]<<endl;
    }

    return 0;
}
