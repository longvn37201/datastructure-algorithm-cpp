#include <bits/stdc++.h>
using namespace std;
int n,a[1001];



int result(){

    //khoi tao maxSum: tong lon nhat day con tang a1 den ai
   int maxSum[n+1];
   for(int i=1;i<=n;i++) maxSum[i]=a[i];

   //update maxSum
   // khi ai>aj: maxSum[i]=max(maxSum[i],maxSum[j]+a[i])
   for(int i=2;i<=n;i++) 
        for(int j=1;j<i;j++)
            if(a[i]>a[j]) maxSum[i]=max(maxSum[i],maxSum[j]+a[i]);

    //  return MAX la gia tri maxSum[i] lon nhat 
    int MAX=maxSum[1];
    for(int i=2;i<=n;i++)    MAX=max(MAX,maxSum[i])  ;
    return MAX;  
}

main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        cout<<result()<<endl;
    }
}