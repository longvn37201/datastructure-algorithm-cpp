#include <bits/stdc++.h>
using namespace std;
main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; int a[n+1],copy[n+1]; for(int i=1;i<=n;i++) {cin>>a[i]; copy[i]=a[i];}
        sort(copy+1,copy+n+1);
        bool testCase=true;
        for(int i=1;i<=n;i++){
            if(a[i]!=copy[i]&&copy[i]!=a[n-i+1]){
                testCase=false;
                break;
            }
        }
        cout<<(testCase?"Yes":"No")<<endl;
    }
}









