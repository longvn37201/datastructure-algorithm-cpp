#include <bits/stdc++.h>
using namespace std;

int n,x;

main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>x; int a[n],temp=-2;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=x) temp=i;
        }
        cout<<temp+1<<endl;
    }
}