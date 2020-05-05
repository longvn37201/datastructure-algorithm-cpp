#include <bits/stdc++.h>
using namespace std;
int n,a[1001];



int result(){
    int longestSub[n+1],res=1; 
    for(int i=1;i<=n;i++){
        longestSub[i]=1;
        for(int j=1;j<i;j++){
            if(a[i]>a[j]&&longestSub[i]<longestSub[j]+1) longestSub[i]=longestSub[j]+1;
        }
        res=max(res,longestSub[i]);
    }
    return res;
}

main(){
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        cout<<result();
}