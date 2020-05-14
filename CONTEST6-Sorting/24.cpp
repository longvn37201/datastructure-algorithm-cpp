#include<bits/stdc++.h>
using namespace std;
long long len,num, a[1000005];


int main(){
    long long t; cin>>t;
    while(t--){
        long long mark;
        cin>>len>>num; for(int i=1;i<=len;i++){
            long long temp; cin>>temp; if(temp==num) mark=i;
        }
        cout<<mark<<endl;
    }
}