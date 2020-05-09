#include <bits/stdc++.h>
using namespace std;

int sum,n,a[101],f[101];   
// SORT giam dan
// f[i] la max Sum tu 1-i co chua a[i]
// => f[i]=max(f[1->i]+a[i])&&f[i]<=sum
// base case f[1]=a[1];
// res la max cua f[i]
int res(){
    f[1]=a[1]; int MAX=f[1];
    for(int i=2;i<=n;i++){
        f[i]=a[i];
        for(int j=1;j<i;j++){
            if(f[j]+a[i]>f[i]&&f[j]+a[i]<=sum) f[i]=f[j]+a[i];
        }
        MAX=max(MAX,f[i]);
    }
    return MAX;
}

bool compare(int a,int b){
    return a>=b;
}
main(){
    cin>>sum>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,compare);
    // for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<res();
}


