#include <bits/stdc++.h>
using namespace std;

main(){
    queue<int> q;
    int t; cin>>t;
    while(t--){
        string action;
        cin>>action;
        if(action=="PUSH"){
            int x; cin>>x;
            q.push(x);
        }
        if(action=="PRINTFRONT"){
            if(q.empty()) cout<<"NONE"<<endl;
            else cout<<q.front()<<endl;
        }
        if(action=="POP") {
            if(q.empty());
            else q.pop();
        }
    }
}