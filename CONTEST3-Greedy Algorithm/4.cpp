#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; int a[n]; for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        long long num1=0,num2=0;
        for(int i=0;i<n;i+=2) {num1*=10;num1+=a[i];};
        for(int i=1;i<n;i+=2) {num2*=10;num2+=a[i];};
        cout<<num1+num2<<endl;
    }
}