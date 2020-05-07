

#include <bits/stdc++.h>
using namespace std;

int n, a[101],maxSumLeft[101],maxSumRight[101];

int maxSumSubBitonic(){
     for(int i=2;i<=n;i++){
         for(int j=1;j<i;j++){
             if(a[j]<a[i]&&maxSumLeft[j]+a[i]>maxSumLeft[i])
                maxSumLeft[i]=maxSumLeft[j]+a[i];
         }
     }
     for(int i=n-1;i>=1;i--){
         for(int j=n;j>i;j--){
             if(a[i]>a[j]&&maxSumRight[j]+a[i]>maxSumRight[i])
                maxSumRight[i]=maxSumRight[j]+a[i];
         }
     }

     int MAX=INT_MIN;
     for(int i=1;i<=n;i++) MAX=max(MAX,maxSumLeft[i]+maxSumRight[i]-a[i]);
    
    return MAX;
}


main(){

    int t;cin>>t;
    while(t--){
        cin>>n; for(int i=1;i<=n;i++) {cin>>a[i]; maxSumLeft[i]=a[i]; maxSumRight[i]=a[i];}
        cout<<maxSumSubBitonic()<<endl;
    }
}