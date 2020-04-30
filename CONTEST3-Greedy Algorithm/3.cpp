#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; int a[n]; for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        long long result=0;
        for(int i=0;i<n;i++) result+=a[i]*i;
        cout<<result%1000000007<<endl;
    }
}