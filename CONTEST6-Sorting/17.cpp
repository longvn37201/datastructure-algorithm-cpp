#include<bits/stdc++.h>
using namespace std;
long long len111,len222, a[1000005],b[1000005];

void merge(long long a[], long long l,long long m,long long r){
    long long len1=m-l+1,len2=r-m;
    long long a1[len1],a2[len2];
    for(long long i=0;i<len1;i++) a1[i]=a[i+l];
    for(long long i=0;i<len2;i++) a2[i]=a[m+1+i];

    long long run1=0,run2=0,index=l;
    while(run1<len1&&run2<len2){
        if(a1[run1]<=a2[run2]) a[index++]=a1[run1++];
        else a[index++]=a2[run2++];
    }
    while(run1<len1) a[index++]=a1[run1++];
    while(run2<len2) a[index++]=a2[run2++];
}

void mergeSort(long long a[], long long l,long long r){
    if(l<r){
        long long m=(l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}



int main(){
    long long t; cin>>t;
    while(t--){
        cin>>len111>>len222;long long MAX=INT_MIN,MIN=INT_MAX;
        for(long long i=0;i<len111;i++){
            cin>>a[i];
            MAX=max(a[i],MAX);
        }
        for(long long i=0;i<len222;i++){
            cin>>b[i];
            MIN=min(b[i],MIN);
        }
        // mergeSort(a,0,len111-1);
        // mergeSort(b,0,len222-1);
        // // sort(a,a+n);
        // // sort(b,b+n);
        // // cout<<a[len111-1]*b[0];
        // cout<<a[len111-1]*b[0];
        // quickSort(0,n-1);
		cout <<MAX*MIN<<endl;
    }
}