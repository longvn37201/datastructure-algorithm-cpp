#include <bits/stdc++.h>
using namespace std;
long long n,k;
long long fibo[93];

string devideAndConquer(long long n, long long k){
    if(n==1) return "A";
    if(n==2) return "B";
    if(k<=fibo[n-2]) return devideAndConquer(n-2,k);
    return devideAndConquer(n-1,k-fibo[n-2]);

}

main(){
    fibo[1]=1;fibo[2]=1;
    for(int i=3;i<93;i++) fibo[i]=fibo[i-1]+fibo[i-2];

    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<devideAndConquer(n,k)<<endl;;
    }    
}