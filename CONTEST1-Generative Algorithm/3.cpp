#include <iostream>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		int n;  cin>>n;
		int a[n+1],run=n-1,run2=n; for(int i=1;i<=n;++i)  cin>>a[i];
		
		while(run&&a[run]>a[run+1]) run--;
		
		if(run){
			while(a[run2]<a[run]){
				run2--;
			}
			int temp=a[run]; a[run]=a[run2]; a[run2]=temp;
			
			int first=run+1,last=n;
			while(first<last){
				temp=a[first]; a[first]=a[last];a[last]=temp; first++;last--;
			}	
		} else for(int i=1;i<=n;i++) a[i]=i;
		
		for(int i=1;i<=n;i++) cout<<a[i]<<" ";cout<<endl;
		
		
	}
}
