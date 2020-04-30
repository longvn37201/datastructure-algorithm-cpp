#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k; int a[n]; for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        long long num1=0,num2=0;
        if(k>n/2) k=n-k;
        for(int i=0;i<k;i++) num1+=a[i];
        for(int i=k;i<n;i++) num2+=a[i];
        cout<<num2-num1<<endl;
    }
}