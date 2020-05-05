#include <bits/stdc++.h>
using namespace std;
int n,k,a[1001];
int matrix[1001][50];

// chọn i => f[i][j]= f[i-1][(j-a[i]%k)%k] + 1;
// không chọn i => f[i][j]=f[i-1][j];
// =>> f[i][j]=max(chọn,không chọn);

int result(){
    for(int i=0;i<k;i++) matrix[1][i]=INT_MIN;
    matrix[1][a[1]%k]=1;
    for(int i=2;i<=n;i++){
        for(int j=0;j<k;j++){
            matrix[i][j]=max(
                                matrix[i-1][j],
                                matrix[i-1][(j-a[i]%k+k)%k]+1
                            );
        }
    }
    return matrix[n][0];
}

main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>a[i];
        cout<<result()<<endl;
    }
}


