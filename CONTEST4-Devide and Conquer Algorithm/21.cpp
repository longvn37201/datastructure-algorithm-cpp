#include <bits/stdc++.h>
using namespace std;
long long n,k;

long long power(int n, int k){
    if(k==0) return 1;
    long long x=power(n,(k/2))%1000000007;
    if(k%2==0)
        return x%1000000007*x%1000000007;
    return x%1000000007*x%1000000007*n%1000000007;    
}

main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<power(n,k)<<endl;
    }    
}