#include <iostream>
using namespace std;

int a[50],b[50],check,n,k,count;

bool toHopCuoi(){
	int run=n;
	for(int i=k;i>=1;i--) if(a[i]!=run--)return 0;
	return 1;
}

void nextToHop(){
	int i=k;
	while(b[i]==n-(k-i)){
		i--;
	}
	
	b[i]++;
	for(int j=i+1;j<=k;j++) b[j]=b[i]+j-i;
	
}

main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		count=0;
		for(int i=1;i<=k;i++) {cin>>a[i]; b[i]=a[i];}
		if(toHopCuoi()) cout<<k<<endl;
		else{
			nextToHop();
			for(int i=1;i<=k;i++)
				for(int j=1;j<=k;j++)
					if(a[i]==b[j]) count++;
			cout<<k-count<<endl;	
		} 
	}
}
