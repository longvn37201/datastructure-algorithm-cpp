#include <iostream>
using namespace std;
int a[100],result[10000],n,temp;

//output
void output(int temp2){
	int run=1;
	while(temp2--){
		cout<<"[";
		for(int i=temp-1;i>=temp-run;i--){
			if(i==temp-run) cout<<result[i];
			else cout<<result[i]<<" ";
		}
		cout<<"] ";
		temp-=run; run++;
	}
}

//luu gia tri callback vao result
void write(){
    for(int i=n;i>=1;i--) {
    	result[temp]=a[i]; temp++;
	}
}

// callback 
void callback(int k){
    if(k){
        write();
        for(int i=1;i<k;i++) a[i]+=a[i+1];
        callback(--n);
        // callback(k-1);
    } 
    else return;
}

main(){
    int t; cin>>t;
    while(t--){
    	temp=0;
        cin>>n; for(int i=1;i<=n;++i) cin>>a[i];
        int temp2=n;
        callback(n);
        output(temp2);
        cout<<endl;

    }
}
