#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    int arraySize = ar.size();
    int mostCommonBird=-1, birdIndex;
    const int ID =6;
    vector<int> freq(ID);
    
    for( int i = 0 ; i < arraySize ; i++){
        freq[ar[i]]++;
    }
    
    for(int i = 1 ; i < ID ; i++ ){
        if( mostCommonBird < freq[i]){
            mostCommonBird = freq[i];
            birdIndex=i;
        }
    }
    return birdIndex;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
