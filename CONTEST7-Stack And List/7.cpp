
#include <bits/stdc++.h>
using namespace std;

string s;

int minFix(){
    vector<char> STACK;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') STACK.push_back('(');
        if(s[i]==')'){
            // if(STACK.back()=='(') STACK.pop_back();
            // else STACK.push_back(')');
            if(STACK.empty()||STACK.back()==')') STACK.push_back(')');
            if(STACK.back()=='(') STACK.pop_back();
        }
    }

    // ))) (((
    int openingBraket=0;
    for(int i=0;i<STACK.size();i++){
        if(STACK[i]=='(') break;
        else openingBraket++;
    }

    if(openingBraket%2==0) return STACK.size()/2;
    else return STACK.size()/2+1;

}

main(){
    long long t; cin>>t;
    while(t--){
        cin>>s;
        cout<<minFix()<<endl;
    }
}