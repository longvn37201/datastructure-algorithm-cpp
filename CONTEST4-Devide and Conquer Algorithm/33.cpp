#include <bits/stdc++.h>
using namespace std;
int MOD = 1e9+7;

long long power(long long n,long long m){
    if(m==0) return 1;
    long long x=power(n,m/2);
    if(m%2==0) return (x%MOD*x%MOD)%MOD;
    return n*(x%MOD*x%MOD)%MOD;
}
long long reverse(long long n){
    long long m=0;
    while(n){
        m=m*10+n%10;
        n/=10;
    }return m;
}

main(){
    int t; cin>>t;
   	while(t--){
        long long n;cin>>n;
        long long m=reverse(n);
        cout<<power(n,m)<<endl;
    }
}


