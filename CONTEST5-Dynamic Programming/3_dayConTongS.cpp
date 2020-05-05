#include <bits/stdc++.h>
using namespace std;
int n,sum,a[201];
bool something(){
    //khoi tao bang phuong an
    int mark[sum+1]={0};
    for(int i=1;i<=sum;i++) mark[i]=0;
    mark[0]=1;

    // cong thuc quy hoach dong
    // // L[t]:=0; L[0]:=1;
    //     for i := 1 to n do
    //         for t := S downto a[i] do
    //             if (L[t]=0) and (L[t-a[i]]=1) then
    //                         L[t]:=1;
    for(int i=1;i<=n;i++){
        for(int j=sum;j>=a[i];j--){
            if(mark[j]==0&&mark[j-a[i]]==1) mark[j]=1; 
            if(mark[sum]==1) return true;
        }
    } return false;
}

main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>sum;
        for(int i=1;i<=n;i++)cin>>a[i];
        if(something()) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}