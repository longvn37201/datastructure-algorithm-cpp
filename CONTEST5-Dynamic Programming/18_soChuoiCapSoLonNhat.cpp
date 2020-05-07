

#include <bits/stdc++.h>
using namespace std;

int f[101];

struct pairr{
    int a;
    int b;
};

int maxSub(pairr arr[],int n){
    int MAX=INT_MIN;
    for(int i=2;i<=n;i++){
        for(int j=1;j<i;j++){
            if(arr[i].a>arr[j].b&&f[i]<f[j]+1)
                f[i]=f[j]+1;
            MAX=max(MAX,f[i]);    
        }
    }
    return f[n];
}

bool compare(pairr arr1,pairr arr2){
    return arr1.a<arr2.a;
}

main(){

    int t;cin>>t;
    while(t--){
        int n; cin>>n; pairr arr[n+1];
        for(int i=1;i<=n;i++) {cin>>arr[i].a>>arr[i].b; f[i]=1;}
        sort(arr+1,arr+n+1,compare);
        // test compare
        // for(int i=1;i<=n;i++) cout<<arr[i].a<<" "<<arr[i].b<<endl;
        cout<<maxSub(arr,n)<<endl;
    }
}