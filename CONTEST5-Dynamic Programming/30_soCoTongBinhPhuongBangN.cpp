#include <bits/stdc++.h>
using namespace std;
int f[10001],n;

int res(){
    // base case
    f[0]=0;  
    f[1]=1;  //1=1^2
    f[2]=2;  //2=1^2+1^2
    f[3]=3;  //
    // ex: f[6]=3 <=> 2^2+1^2+1^2  =>j=1 -> f[6]=f[6-1^2]+1=f[5]+1;  j=2 ->f[6]=f[6-2^2]+1=f[2]+1=3 => res
    for(int i=4;i<=n;i++){
        f[i]=i; 
        for(int j=1;j*j<=i;j++){
            f[i]=min(f[i],f[i-j*j]+1);
        }
    }
    return f[n];
}

main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        cout<<res()<<endl;
    }
}