#include <bits/stdc++.h>
using namespace std;

int maxAtMiddle(int a[],int left,int mid,int right){
    int testSum=0,maxLeft=INT_MIN,maxRight=INT_MIN;

    for(int i=mid;i>=left;i--){
        testSum+=a[i]; if(testSum>maxLeft) maxLeft=testSum;
    }

    testSum=0;
    for(int i=mid+1;i<=right;i++){
        testSum+=a[i]; if(testSum>maxRight) maxRight=testSum;
    }

    return max( 
                max(maxLeft,maxRight),
                maxLeft+maxRight
            );
}


int findSubsetMax(int a[],int left, int right){
    if(left==right) return a[left];
    int mid=(left+right)/2;

    return max(
                max(findSubsetMax(a,left,mid),findSubsetMax(a,mid+1,right)),
                maxAtMiddle(a,left,mid,right)
            );
}


main(){
    // int test[]={1,6,-5,-5,2};
    // cout<<maxAtMiddle(test,0,2,4);
    int t; cin>>t;
   	while(t--){
           int n;cin>>n;int a[n];
           for(int i=0;i<n;i++) cin>>a[i];
            cout<<findSubsetMax(a,0,n-1)<<endl;
    }
}


