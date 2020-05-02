

#include <bits/stdc++.h>
using namespace std;
int n;

main(){
    int t; cin>>t;
   	while(t--){
           cin>>n;
            long long a[n],b[n-1] ;
            for(int i=0;i<n;i++) cin>>a[i];
            for(int i=0;i<n-1;i++) cin>>b[i];
            for(int i=0;i<n-1;i++) {if(a[i]!=b[i]){cout<<i+1;break;} if(i==n-2) cout<<n;}
            cout<<endl;

    }
}


