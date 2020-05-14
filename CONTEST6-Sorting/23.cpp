#include<bits/stdc++.h>
using namespace std;
long long len,num, a[1000005];


int main(){
    long long t; cin>>t;
    while(t--){
        bool check=true;
        long long res;
        cin>>len; for(long long i=1;i<len;i++) {cin>>a[i]; if(check&&a[i]!=i) {res=i;check=false;}}
        cout<<(check?len:res)<<endl;
    }
}