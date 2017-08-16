#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    // Complete this function
    
    string result;
    vector<string> token;
  
    char * cstr = new char [s.length()+1];
    strcpy (cstr, s.c_str());
    
    char * p = strtok (cstr,":PMA");
    while (p!=0)
    {
        string str(p);
        token.push_back(str);
        p = std::strtok(NULL,":PMA");
    }
    delete[] cstr;
    
    if (s.find("PM") != string::npos) { 
        string tmp;
        int hourNum= atoi(token[0].c_str());
        if(hourNum != 12){
            hourNum+=12;
        }
        else{
            
        }
        tmp=to_string(hourNum);
        result+=tmp;    
        result+=":";
    }
    else{
        string tmp;
        int hourNum= atoi(token[0].c_str());
        if(hourNum == 12){
            tmp="00";
            hourNum-=12;
        }
        else{
            tmp="0";
            tmp+=to_string(hourNum);    
        }
       
        result+=tmp;    
        result+=":";
    }
    for(int i = 1; i < token.size()-1;i++){
        result+=token[i];
        result+=":";
        
    }
    result+=token[token.size()-1];
    return result;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
