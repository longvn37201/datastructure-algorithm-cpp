#include<bits/stdc++.h>
using namespace std;
long long len,num, a[1000005];


int main(){
    // long long t; cin>>t;
    // while(t--){
        // long long mark;
        cin>>len; for(int i=0;i<len;i++){
            cin>>a[i];
        }
        for(int i=0;i<len;i++){
            cout<<"Buoc "<<i<<": ";
            sort(a,a+i+1);
            for(int j=0;j<=i;j++){
                cout<<a[j]<<" ";
            }
            cout<<endl;
        }
        // cout<<mark<<endl;
    // }
}