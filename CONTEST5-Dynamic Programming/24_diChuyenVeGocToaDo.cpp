#include <bits/stdc++.h>
using namespace std;
long long x,y,f[100][100];

// f[i][j] la so cach di chuyen tu (i,j) ve O.
// => f[i][j]=f[j-1][i]+f[j][i-1]
// base case f[0][i]=f[i][0]=1;

long long res(){
    for(long long i=1;i<=x;i++) f[i][0]=1;
    for(long long i=1;i<=y;i++) f[0][i]=1;

    for(long long i=1;i<=y;i++){
        for(long long j=1;j<=x;j++){
            f[j][i]=f[j-1][i]+f[j][i-1];
        }
    }
    return f[x][y];
}

main(){
    long long t;cin>>t;
    while(t--){
        cin>>x>>y; 
        cout<<res()<<endl;
    }
}


