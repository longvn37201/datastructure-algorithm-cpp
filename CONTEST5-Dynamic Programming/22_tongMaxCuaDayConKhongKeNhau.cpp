



#include <bits/stdc++.h> 
using namespace std; 
int n,a[1000001];
long long f[1000001];

// f[i] la tong cua day con max tu 1->i co chua a[i]
// => f[i]=max(f[i-2],f[i-3])+a[i]
// base case f[1]=a[1]; f[2]=a[2];

long long result(){
    f[0]=INT_MIN;
    f[1]=a[1];
    f[2]=a[2];
    for(int i=3;i<=n;i++){
        f[i]=a[i];
        f[i]+=max(f[i-2],f[i-3]);
    }
    return max(f[n],f[n-1]);
}

int main() 
{ 
	int t;cin>>t;
    while(t--){
        cin>>n;for(int i=1;i<=n;i++) cin>>a[i];
        cout<<result()<<endl;
    }
} 