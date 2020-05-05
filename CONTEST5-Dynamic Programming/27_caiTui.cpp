#include <bits/stdc++.h>
using namespace std;
int n,sum,v[1001],value[1001];
int matrix[1001][1001];
int result(){
    for(int i=1;i<=n;i++)
        for(int j=1;j<=sum;j++){
            if(v[i]>j) matrix[i][j]=matrix[i-1][j];
            else{
                matrix[i][j]=max(
                                    matrix[i-1][j],
                                    matrix[i-1][j-v[i]]+value[i]
                                );
            }
        }
    return matrix[n][sum];
}

main(){
    int  t;cin>>t;
    while(t--){
        cin>>n>>sum;
        for(int i=1;i<=n;i++) cin>>v[i];
        for(int i=1;i<=n;i++) cin>>value[i];
        cout<<result()<<endl;
    }
}