#include <bits/stdc++.h>
using namespace std;
int n,k,a[1001];
int f[1001][1001];

//cong thuc truy hoi
//  c(0,n)=c(1,n)=1
//  c(k,n)=c(k,n-1)+c(k-1,n-1)


int result(){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=k;j++){
            if(j==0||j==i) f[i][j]=1;
            else f[i][j]=(f[i-1][j]+f[i-1][j-1])%1000000007;
        }
    }
    return f[n][k];
}

main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<result()<<endl;
    }
}


