#include <bits/stdc++.h>
using namespace std;

// 1
// 11 2
// 111 12 21 3
// 1111 112 121 211 22 13 31 4
// 11111 113 131 311 1112 1121 1211 2111 221 121 122 14 41 23 32 5
// ..............


long long powwwwwwwwwwwww(int a,long long n){
    if(n==0) return 1;
    long long temp=powwwwwwwwwwwww(a,n/2)%123456789;
    if(n%2==0) return (temp*temp)%123456789;
    return (a*temp*temp)%123456789;
}

long long magic(long long n){
    return powwwwwwwwwwwww(2,n-1);
}

int main()
{
   int t;cin>>t;
   while(t--){
       long long n; cin>>n;
       cout<<magic(n)<<endl;
   }
}