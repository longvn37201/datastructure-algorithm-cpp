

#include <bits/stdc++.h>
using namespace std;
int MOD=1e9+7;

long long f[1001][1001];

long long chinhHop(int n,int k){

    // K>=n => f[][]=0
    // P (n, k) = P (n-1, k) + k * P (n-1, k-1)
    for(int i=0;i<=n;i++){
        for(int j=0;j<=min(i,k);j++){
            //base case
            if(j==0) f[i][j]=1;
            else{
                f[i][j]=f[i-1][j]+j*f[i-1][j-1];
                f[i][j]%=MOD;
            }
        }
    }
    
    // test
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=k;j++) cout<<f[i][j]<<" ";
    //     cout<<endl;
    // }
    return f[n][k];
}

main(){
    int t;cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        cout<<chinhHop(n,k)<<endl;
    }
}
