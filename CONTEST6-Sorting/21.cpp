#include<bits/stdc++.h>
using namespace std;
long long len,a0[1000005];

struct arr{
    long long value,freq;
};
arr a[1000005];

bool compare(arr x,arr y){
    return x.freq>y.freq;
}

// void merge( long long l,long long m,long long r){
//     long long len1=m-l+1,len2=r-m;
//     arr a1[len1],a2[len2];
//     for(long long i=0;i<len1;i++) a1[i]=a[i+l];
//     for(long long i=0;i<len2;i++) a2[i]=a[m+1+i];

//     long long run1=0,run2=0,index=l;
//     while(run1<len1&&run2<len2){
//         if(a1[run1].freq>=a2[run2].freq) a[index++]=a1[run1++];
//         else a[index++]=a2[run2++];
//     }
//     while(run1<len1) a[index++]=a1[run1++];
//     while(run2<len2) a[index++]=a2[run2++];
// }

// void mergeSort( long long l,long long r){
//     if(l<r){
//         long long m=(l+r)/2;
//         mergeSort(l,m);
//         mergeSort(m+1,r);
//         merge(l,m,r);
//     }
// }

void solve(){
    a[0].value=a0[0]; a[0].freq=1;
    long long indexA=0;
    for(long long i=1;i<len;i++){
        if(a0[i]==a0[i-1]){
            a[indexA].freq++;
        }else{
            indexA++;
            a[indexA].value=a0[i]; a[indexA].freq=1;
        }
    }
    // sort(a,a+indexA+1,compare);
    // mergeSort(0,indexA);
    stable_sort(a,a+indexA+1,compare);
    for(int i=0;i<=indexA;i++){
        for(int j=1;j<=a[i].freq;++j){
            cout<<a[i].value<<" ";
        }
    }
}


int main(){
    long long t; cin>>t;
    while(t--){
        cin>>len; for(long long i=0;i<len;i++) cin>>a0[i];
        sort(a0,a0+len);
        solve();
		cout<<endl;
    }
}