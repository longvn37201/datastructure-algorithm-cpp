#include <iostream>
#include <string>
using namespace std;
char a[20]; int n,check;

void output(){
	for(int i=1;i<=n;i++) cout<<a[i];
}
void nextStr(){
	int run=n;
	while(a[run]== 66){
		a[run]=65; run--;
	}
	if(run) a[run]=66;
	else check=0;
	
}
main(){
	int t; cin>>t;
	while(t--){
		check=1;
		cin>>n;
		for(int i=1;i<=n;i++) a[i]=65;
		while(check){
			output();
			cout<<" ";	
			nextStr();
		}
		cout<<endl;
	}
}
