#include<bits/stdc++.h>
using namespace std;
int n,x, a[100000];

void merge(int l,int m,int r){
    int len1=m-l+1,len2=r-m;
    int a1[len1],a2[len2];
    for(int i=0;i<len1;i++) a1[i]=a[i+l];
    for(int i=0;i<len2;i++) a2[i]=a[m+1+i];

    int run1=0,run2=0,index=l;
    while(run1<len1&&run2<len2){
        if(a1[run1]<=a2[run2]) a[index++]=a1[run1++];
        else a[index++]=a2[run2++];
    }
    while(run1<len1) a[index++]=a1[run1++];
    while(run2<len2) a[index++]=a2[run2++];
}

void mergeSort(int l,int r){
    if(l<r){
        int m=(l+r)/2;
        mergeSort(l,m);
        mergeSort(m+1,r);
        merge(l,m,r);
    }
}



int main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        mergeSort(0,n-1);
        // quickSort(0,n-1);
        for(int i=0; i<n; i++) cout <<a[i]<<" ";
		cout <<endl;
    }
}