#include <bits/stdc++.h>
using namespace std;
int m,n;
main(){
    int t; cin>>t;
   	while(t--){
           cin>>m>>n;int a[m],b[n],result[m+n-1]={0}; 
           for(int i=0;i<m;i++) cin>>a[i];
           for(int i=0;i<n;i++) cin>>b[i];
        
            for(int i=0;i<m;i++)
                for(int j=0;j<n;j++){
                    result[i+j]+=a[i]*b[j];
                }

            for(int i=0;i<m+n-1;i++) cout<<result[i]<<" ";  
            cout<<endl;  
    }
}


