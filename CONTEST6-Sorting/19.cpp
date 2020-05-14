#include<bits/stdc++.h>
using namespace std;
long long len, a[1000005];


int main(){
    long long t; cin>>t;
    while(t--){
        cin>>len; for(long long i=0;i<len;i++) cin>>a[i];
        sort(a,a+len);
        long long res=0;
        for(long long i=1;i<len;i++){
            if(a[i]-a[i-1]>1) res+=a[i]-a[i-1]-1;
        }
		cout<<res <<endl;
    }
}