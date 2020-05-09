



#include <bits/stdc++.h> 
using namespace std; 
int MOD=1e9+7;
int n,k,a[1001];
long long f[100000001];

//
// f[i]+=f[i-a[j]] voi a[j]<=i
// base case f[0]=1;

long long result(){
    f[0]=1;   //base case
    for(int sum=1;sum<=k;sum++){
        f[sum]=0;
        for(int index=1;index<=n;index++){
            if(a[index]<=sum){
                f[sum]+=f[sum-a[index]];
                f[sum]%=MOD;
            }
        }
    }
    return f[k];
}

int main() { 
	int t;cin>>t;
    while(t--){
        cin>>n>>k; 
        for(int i=1;i<=n;i++)cin>>a[i];
        cout<<result()<<endl;
    }
} 