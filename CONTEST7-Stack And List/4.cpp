


#include <bits/stdc++.h>
using namespace std;

string s;

bool check(){
    vector<char> myStack;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='[') 
            myStack.push_back(s[i]);
        else{
            if(myStack.empty()) return false;
            if(s[i]==')'&&myStack.back()!='(') return false;
            if(s[i]=='}'&&myStack.back()!='{') return false;
            if(s[i]==']'&&myStack.back()!='[') return false;

            myStack.pop_back();
        }

    }
    if(myStack.empty()) return true;
    return false;
}

main(){
    long long t; cin>>t;
    while(t--){
       cin>>s;
       if(check()) cout<<"YES"; else cout<<"NO";
       cout<<endl;
    }
}