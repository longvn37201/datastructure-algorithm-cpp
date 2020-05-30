
// (((((() ((((())
// )((((())
#include <bits/stdc++.h>
using namespace std;

string s;

void solve(){
    vector<int> myStack;
    myStack.push_back(-1);
    int MAX=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') 
            myStack.push_back(i);
        else{
            myStack.pop_back();
            if(myStack.empty()) myStack.push_back(i);
            MAX=max(MAX,i-myStack.back());
        }

    }
    cout<<MAX;
    // if(myStack.empty()) return true;
    // return false;
}

main(){
    long long t; cin>>t;
    while(t--){
       cin>>s;
    //    if(check()) cout<<"YES"; else cout<<"NO";
        solve();
       cout<<endl;
    }
}