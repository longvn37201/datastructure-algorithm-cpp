#include <bits/stdc++.h>
using namespace std;

long long n,k;


long long timKiemNhiPhan(long long numAdd, long long left, long long right ){
    if(left==right) return 1;
    long long mid=(left+right)/2;
    if(k==mid) return numAdd;
    if(k>mid)  return timKiemNhiPhan(numAdd-1,mid+1,right);
    return timKiemNhiPhan(numAdd-1,left,mid-1);
}

main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>k;

        // 1, 2, 1, 3, 1, 2, 1, 4, 1, 2, 1, 3, 1, 2, 1

        long long len=1,numAdd=1;
        for(int i=1;i<n;i++)
            {len=len*2+1; numAdd++;}
        // cout<<len<<"-"<<numAdd;
        cout<<timKiemNhiPhan(numAdd,1,len)<<endl;

        // string s="1"; long long count=2;
        // for(int i=1;i<n;i++){
        //     s=s+ to_string(count++) +s;
        // }
        // cout<<s[k-1]<<endl;


    }
}