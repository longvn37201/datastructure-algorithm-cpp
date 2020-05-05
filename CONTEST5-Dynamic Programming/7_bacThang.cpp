

#include <bits/stdc++.h>
using namespace std;


int n,k;
int LIST[100001];

// giai thuat
// f[n]=f[n-1]+f[n-2]+...+f[n-k];
// voi bai toan co so f[0]=1;
long long result(){
    LIST[0]=1;
    for(int i=1;i<=n;i++){
        LIST[i]=0;
        for(int j=i-1;j>=0&&j>=i-k;j--){
            LIST[i]+=LIST[j];
            LIST[i]%=1000000007;
        }
    }
    return LIST[n];
}

main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<result()<<endl;
    }
}