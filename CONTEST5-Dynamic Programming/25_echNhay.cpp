#include <bits/stdc++.h>
using namespace std;
long long sum,f[51];

//same bai 21, day con bay gio se la 1,2,3
long long res(){
    f[0]=1;
    for(long long i=1;i<=sum;i++){
        f[i]=0;
        for(long long j=1;j<=3;j++){
            if(j<=i) f[i]+=f[i-j];
        }
    }
    return f[sum];
}
main(){
    long long t;cin>>t;
    while(t--){
        cin>>sum; 
        cout<<res()<<endl;
    }
}


