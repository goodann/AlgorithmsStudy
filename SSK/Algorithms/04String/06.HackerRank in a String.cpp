#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string hack="hackerrank";
        string temp=s;
        
        
        
        bool isHackerrank=true;
        for(int i=0;i<hack.size();i++){
            
            int pos=temp.find(hack[i]);
            if(pos==string::npos){
                
                isHackerrank=false;
                break;
            }
            temp=temp.substr(pos+1);

        }
        if(isHackerrank)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
        
        
        
        /*
        vector<int> count(7);
        for(int i=0;i<s.size();i++){
            switch(s[i]){
                case 'a':
                    count[0]++;
                    break;
                case 'c':
                    count[1]++;
                    break;
                case 'e':
                    count[2]++;
                    break;
                case 'h':
                    count[3]++;
                    break;
                case 'k':
                    count[4]++;
                    break;
                case 'n':
                    count[5]++;
                    break;
                case 'r':
                    count[6]++;
                    break;

            }
        }
        if(count[0]>=2 && count[1]>=1
          && count[2]>=1 && count[3]>=1
          && count[4]>=2 && count[5]>=1
          &&count[6]>=2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        // your code goes here
        */
    }
    return 0;
}
