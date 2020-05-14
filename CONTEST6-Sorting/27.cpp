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
            int MIN=INT_MAX,mark=i;
             for(int j=i;j<=len;j++){
                 if(a[j]<MIN){
                     mark=j;
                     MIN=a[j];
                 }
             }
            swap(a[i],a[mark]);
            cout<<"Buoc "<<i<<": ";
            for(int j=1;j<=len;j++) cout<<a[j]<<" ";
            cout<<endl;
        }
        // cout<<mark<<endl;
    // }
}