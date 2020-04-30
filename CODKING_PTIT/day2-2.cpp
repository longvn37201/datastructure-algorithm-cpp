#include <bits/stdc++.h>
using namespace std;

long long gcd(long long n,long long m){
    if(m==0) return n;
    return gcd(m,n%m);
}
int main(){
    long long n;
    cin>>n; long long a[n];
    for(long long i=0;i<n;i++) cin>>a[i];
    long long j=a[0];
    for(long long i=1;i<n;i++) j=gcd(j,a[i]);
    long long ans=0;

    for (long long i = 1; i <= sqrt (j); i++) 
    {
                 if (j% i == 0) 
        {
        ans++;
        if(i*i!=j)
        ans++;
        }
    }
    cout<<ans;

    return 0;
}
