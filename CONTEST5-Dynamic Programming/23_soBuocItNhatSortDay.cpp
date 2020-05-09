#include <bits/stdc++.h>
using namespace std;
int n;
int f[1001],a[1001];
///  1 5 8 9 2 3
// giong bai 4_dayConDaiNhat. res la so phan tu n tru di day con dai nhat 
int result(){
    int maxSub=1;
    f[1]=1;
   for(int i=2;i<=n;i++){
       f[i]=1;
       for(int j=1;j<i;j++){
           if(a[i]>=a[j]&&f[i]<f[j]+1) f[i]=f[j]+1;
       }
       maxSub=max(maxSub,f[i]);
   }
   return n-maxSub;
}

main(){
    int t;cin>>t;
    while(t--){
        cin>>n; for(int i=1;i<=n;i++) cin>>a[i];
        cout<<result()<<endl;
    }
}


