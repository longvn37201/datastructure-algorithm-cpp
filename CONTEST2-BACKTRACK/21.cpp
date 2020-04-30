#include <iostream>
using namespace std;
string s; int a[100],b[100]={0};

void output(){
	for(int i=0;i<s.length();++i) cout<<s[a[i]]; cout<<" ";
}

void backTracking(int i){
	for(int j=0;j<s.length();j++){
		if(!b[j]){
			a[i]=j; b[j]=1;
			if(i==s.length()-1) output();
			else backTracking(i+1);
			b[j]=0;
		}		
	}
}

main(){
	int t;cin>>t;
	while(t--){
		cin>>s;
		backTracking(0);
		cout<<endl;
	}
}
