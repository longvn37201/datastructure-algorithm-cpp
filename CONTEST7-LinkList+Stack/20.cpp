#include<bits/stdc++.h>
using namespace std;

 main(){
	long long t;
	cin>>t;
	while(t--){
	    long long n; cin>>n;
        long long a[n],b[n],run=0; 
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++){
                if(b[i]<b[j]){ 
                    b[i]=b[j];
                    break;
                }
            }
            if(b[i]==a[i]) cout<<-1<<" ";
            else cout<<b[i]<<" ";
        }
        cout<<-1<<endl;
	}
}