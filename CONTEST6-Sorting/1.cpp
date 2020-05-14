#include <bits/stdc++.h>
using namespace std;
int arr[1001],n;

int partition(int l,int r){
    int index=l;
    for(int i=l;i<r;i++){
        if(arr[i]<=arr[r]){
            swap(arr[i],arr[index++]);
        }
    }
    swap(arr[index],arr[r]);

    return index;
}

void quickSort(int l,int r){
    if(l<r){
        int pivot=partition(l,r);
        quickSort(l,pivot-1);
        quickSort(pivot+1,r);
    }
}

main(){
    int t;cin>>t;
    while(t--){
        cin>>n; for(int i=1;i<=n;i++) cin>>arr[i];
        quickSort(1,n);
        int l=1,r=n;
        while(l<=r){
            if(l==r) cout<<arr[l++];
            else cout<<arr[r--]<<" "<<arr[l++]<<" ";
        }
        // for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
}