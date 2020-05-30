
#include <bits/stdc++.h>
using namespace std;

string s;

bool test(){

    int Bracket=0, Operator=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('&&s[i+2]==')') return true;
        if(s[i]=='(') Bracket++;
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/') Operator++;
    }
    return Bracket>Operator;
}


main(){
    long long t; cin>>t;
    while(t--){
        cin>>s;
        // cout<<test();
       if(test()) cout<<"Yes"; else cout<<"No";
       cout<<endl;
    }
}