


#include <bits/stdc++.h>
using namespace std;

string s;

void solve(){
    vector<char> temp;
    int i=0;
    while(i<s.size()){
        while(i<s.size()&&s[i]!=' '){
            temp.push_back(s[i]);
            i++;
        }

        while(!temp.empty()){
            cout<<temp.back();
            temp.pop_back();
        }

        if(i<s.size()){
            cout<<s[i++];
        }
    }
}

main(){
    long long t; cin>>t;
    getline(cin,s);
    while(t--){
        getline(cin,s);
        solve();
        cout<<endl;
    }
}