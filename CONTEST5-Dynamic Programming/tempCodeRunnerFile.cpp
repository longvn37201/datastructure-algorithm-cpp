



#include <bits/stdc++.h> 
using namespace std; 
int n,a[99999999999999],f[99999999999999],l[99999999999999],r[99999999999999];

unsigned long long result(){
    int MAX=INT_MIN;
    l[1]=a[1];
    for(int i=2;i<=n;i++){
        l[i]=a[i];
        for(int j=i-2;j>=1;j--){
            if(l[j]+a[i]>l[i]) l[i]=l[j]+a[i];
        }
    }
    r[n]=a[n];
    for(int i=n-1;i>=1;i--){
        r[i]=a[i];
        for(int j=i+2;j<=n;j++){
            if(r[j]+a[i]>r[i]) r[i]=r[j]+a[i];
        }
    }

    for(int i=1;i<=n;i++){
        MAX=max(MAX,r[i]+l[i]-a[i]);
    }
    return MAX;
}

int main() 
{ 
	int t;cin>>t;
    while(t--){
        cin>>n;for(int i=1;i<=n;i++) {cin>>a[i];}
        cout<<result()<<endl;
    }
} 