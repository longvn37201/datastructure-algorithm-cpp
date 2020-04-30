#include <bits/stdc++.h>
using namespace std;

int n,k,a[200000];

int findLocation(int left,int right){
    if(left>right) return 0;
    int mid=(left+right)/2;
    if(a[mid]==k) return mid;
    if(a[mid]>k) return findLocation(left,mid-1);
    return findLocation(mid+1,right);


}

main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>a[i];
        int result= findLocation(1,n);
        result?cout<<result:cout<<"NO";
        cout<<endl;


    }
}