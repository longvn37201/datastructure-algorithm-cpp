#include<bits/stdc++.h>
using namespace std;
long long len,k, a[1000005],run;

long long binSearch(long long l,long long r){

    if(l<=r){
        long long mid=(l+r)/2;
        if(a[mid]<a[run]+k){
            if(mid==len-1||a[mid+1]>=a[run]+k) return mid;
            return binSearch(mid+1,r);
        }else return binSearch(l,mid-1);

    }
    return 0;
}

int main(){
    long long t; cin>>t;
    while(t--){
        cin>>len>>k; long long MAX=INT_MIN,MIN=INT_MAX;
        for(long long i=0;i<len;i++){
            cin>>a[i];
        }

        sort(a,a+len);
        long long res=0;
        for(run=0;run<len-1;run++){
            long long temp=binSearch(run+1,len-1);
            if(temp>0)
                res+=temp-run;
        }
		cout <<res<<endl;
    }
}