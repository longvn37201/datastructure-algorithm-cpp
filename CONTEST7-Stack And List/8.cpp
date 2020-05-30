

#include <bits/stdc++.h>
using namespace std;

string s;

string result(){
    string result="";
    vector<int> switchOperator;  // is switch operator?  1=true; 0=false;
    switchOperator.push_back(0);

    for(int i=0;i<s.size();i++) { 

        if (s[i] == '+') { 
            if (switchOperator.back() == 1) result+= '-'; 
            if (switchOperator.back() == 0) result+= '+'; 
        } 

        else if (s[i] == '-') { 
            if (switchOperator.back() == 1) result+= '+'; 
            if (switchOperator.back() == 0) result+= '-';
        } 

        else if (s[i] == '(' ) { 
            if (s[i - 1] == '-') { 
                if(switchOperator.back()==0) switchOperator.push_back(1);
                else switchOperator.push_back(0);
            } 
            if (s[i - 1] == '+') switchOperator.push_back(switchOperator.back()); 
        } 
  
        else if (s[i] == ')')  switchOperator.pop_back(); 
        
        else result+= s[i]; 
    } 

    return result;
}

main(){
    long long t; cin>>t;
    while(t--){
        cin>>s;
        cout<<result()<<endl;
    }
}