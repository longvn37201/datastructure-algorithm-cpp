// 1 10 11 100 101
#include <bits/stdc++.h>
using namespace std;
// string s;
main(){
    // 17-42
    long long t; cin>>t;
    while(t--){
        queue<string> q; 
        q.push("1");
        long long n; cin>>n;
        for(long long i=1;i<=n;i++){
            cout<<q.front()<<" ";
            q.push(q.front()+'0');
            q.push(q.front()+'1');
            q.pop();
        }
        cout<<endl;
    }
}