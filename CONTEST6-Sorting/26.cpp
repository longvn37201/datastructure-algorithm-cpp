#include<bits/stdc++.h>
using namespace std;
long long len,num, a[1000005];


int main(){
    // long long t; cin>>t;
    // while(t--){
        // long long mark;
        cin>>len; for(int i=1;i<=len;i++){
            cin>>a[i];
        }
        for(int i=1;i<len;i++){
            for(int j=i+1;j<=len;j++){
                if(a[j]<a[i])
                    swap(a[j],a[i]);
            }
            cout<<"Buoc "<<i<<": ";
            for(int j=1;j<=len;j++) cout<<a[j]<<" ";
            cout<<endl;
        }
        // cout<<mark<<endl;
    // }
}