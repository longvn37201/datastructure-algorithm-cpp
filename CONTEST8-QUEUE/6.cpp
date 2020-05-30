
#include <bits/stdc++.h>
using namespace std;
main(){
    long long t; cin>>t;
    while(t--){
        // 9 
        // 90 99
        // 99 900 909
        // 900 909
        queue<string> q; 
        q.push("9");
        long long n; cin>>n;
        while(true){
            long long test = stoi(q.front());
            if(test%n==0) {cout<<q.front(); break;}
            else{
                q.push(q.front()+'0');
                q.push(q.front()+'9');
                q.pop();
            }
        }
        cout<<endl;
    }
}