#include<bits/stdc++.h>
using namespace std;
long long len,num, a[1000005];


int main(){
    long long t; cin>>t;
    while(t--){
        bool test=false;
        cin>>len>>num; for(long long i=0;i<len;i++) {long long temp; cin>>temp; if(temp==num) test=true;}
        cout<<(test?1:-1)<<endl;
    }
}