
#include <bits/stdc++.h>
using namespace std;
main(){
    long long t; cin>>t;
    while(t--){
        queue<long long> q; 
        q.push(1);
        long long n; cin>>n;
        long long count=0;
        
        while(q.front()<=n){
            q.push(q.front()*10);
            q.push(q.front()*10+1);
            q.pop();
            count++;
        }
        cout<<count<<endl;
    }
}
