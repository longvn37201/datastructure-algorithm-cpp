#include <bits/stdc++.h>
using namespace std;
int arr[100];

int partition(int l,int r){
    int index=l;
    for(int i=l;i<r;i++){
        if(arr[i]<arr[r]){
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
    for(int i=1;i<=6;i++){
        cin>>arr[i];
    }
    // int left=1,right=6;
    quickSort(1,6);
    // partition(1,6);
    for(int i=1;i<=6;i++){
        cout<<arr[i]<<" ";
    }

}