#include <bits/stdc++.h>
using namespace std;

int process(string s){
    
    //index luu cac chi muc cua [ trong s
    vector<int> index;
    for(int i=0;i<s.size();i++)
        if(s[i]=='[') index.push_back(i);
    
    //open la bien chay cua index
    //result luu so lan swap 2 s[i] canh nhau
    int open=0,compare=0,result=0;
    for(int i=0;i<s.size();++i){
        if(s[i]=='[') {compare++;open++;}
        if(s[i]==']') compare--;    
        if(compare<0){
            result+= index[open]-i;
            swap(s[i],s[index[open++]]);
            compare=1;
        }
    }
    return result;
}

main(){
    int t;cin>>t;
    while(t--){
        string s; cin>>s;
        cout<<process(s)<<endl;

    }
}