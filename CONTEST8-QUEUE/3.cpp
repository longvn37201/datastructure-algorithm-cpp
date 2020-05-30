#include <bits/stdc++.h>
using namespace std;

main(){
    deque<int> q;
    int t; cin>>t;
    while(t--){
        string action;
        cin>>action;
        if(action=="PUSHBACK"){
            int x; cin>>x;
            q.push_back(x);
        }
        if(action=="PUSHFRONT"){
            int x; cin>>x;
            q.push_front(x);
        }
        if(action=="PRINTFRONT"){
            if(q.empty()) cout<<"NONE"<<endl;
            else cout<<q.front()<<endl;
        }
        if(action=="PRINTBACK"){
            if(q.empty()) cout<<"NONE"<<endl;
            else cout<<q.back()<<endl;
        }
        if(action=="POPBACK") {
            if(q.empty());
            else q.pop_back();
        }
        if(action=="POPFRONT") {
            if(q.empty());
            else q.pop_front();
        }
    }
}