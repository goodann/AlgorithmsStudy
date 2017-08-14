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





int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    
    vector <bool> a(10e7);
	for(int i=0;i<s.length();i++)                       //For every letter in the string
	{
		int sum=0;
		for(int j=0;j<s.length()-i,s[i]==s[i+j];j++)    //Runs only as long as the next letter is the same
			sum+=s[i+j]-96;                                 //Gets the weight
		a[sum]=true;                                       //Every weight which is present is set as true at those indices
	}
    for(int a0 = 0; a0 < n; a0++)                           
    {   int x;
        cin >> x;  //Input required weight
        
        if(a[x]) cout << "Yes" << endl; //If the value at the index is true, that weight is present
        else cout << "No" << endl;   
    }
    
    return 0;
}









/*

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    map<long,long> pairMap;
    for(long i=0;i<s.size();i++){
        pairMap[s[i]-'a'+1]++;
    }
    
    //for(auto i=pairMap.begin();i!=pairMap.end();i++)
        //cout<<i->first<<" "<<i->second<<endl;
    
    for(long a0 = 0; a0 < n; a0++){
        long x;
        cin >> x;
        bool isElement=false;
        for(auto i=pairMap.begin();i!=pairMap.end() && !isElement;i++){
            if(x%i->first==0 && x/i->first<=i->second)
                isElement=true;
                
        }
        if(isElement)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        // your code goes here
        
    }
    return 0;
}
*/