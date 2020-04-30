#include <iostream>
using namespace std;
int a[100],n;

void output(){
    cout<<"[";
    for(int i=1;i<n;i++) cout<<a[i]<<" "; cout<<a[n]<<"]"<<endl;
}
void callback(int k){
    if(k){
        output();
        for(int i=1;i<k;i++) a[i]+=a[i+1];
        callback(--n);
    } 
    else return;
}
main(){
    int t; cin>>t;
    while(t--){
        cin>>n; for(int i=1;i<=n;++i) cin>>a[i];
        callback(n);
    }
}