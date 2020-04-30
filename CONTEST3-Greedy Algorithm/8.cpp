#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; int a[n],b[n]; for(int i=0;i<n;i++) cin>>a[i]; for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(b[i]>b[j]){swap(b[i],b[j]);swap(a[i],a[j]);}
        int count=1;
        int i=0;
        for(int j=i+1;j<n;j++)
            if(a[j]>=b[i]){
                i=j;
                count++;
            }
        cout<<count<<endl;

    }
}