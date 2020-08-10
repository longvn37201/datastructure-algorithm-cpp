#include <bits/stdc++.h>
using namespace std;

string solve(string s){
    stack<string> st;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z'){
            string temp=""; temp+=s[i];
            st.push(temp);
        }
        if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/'){
            string afterr=""; afterr+=st.top(); st.pop();
            string beforee=""; beforee+=st.top(); st.pop();
            string neww= beforee+' '+ s[i] +' '+ afterr;
            st.push(neww);
        }
    }
    return st.top();
}

main(){
    int t;cin>>t;
    while(t--){
        string s; cin>>s;
        cout<<solve(s)<<endl;
    }

}