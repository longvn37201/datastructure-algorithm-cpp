

#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
// f[i][j] luu gia tri min khi den duoc a[i][j]
int f[1001][1001]={0};

int result(int row,int col){

    // phep thuat
    // f[i][j]=a[i][j]+ min(f[i-1][j],f[i][j-1],f[i-1][j-1])
    // base case f[1][1]=a[1][1];
    // res tai f[row][col]
    int run=1;
    while(run<=row&&run<=col){
        for(int j=run;j<=col;j++){
            f[run][j]=a[run][j]+min( min(f[run-1][j],f[run][j-1]), f[run-1][j-1] );
        }
        for(int i=run+1;i<=row;i++){
            f[i][run]=a[i][run]+min( min(f[i-1][run],f[i][run-1]), f[i-1][run-1] );
        }

        run++;
    }
    return f[row][col];
}

main(){
    //khoi tao case co so cho moi truong hop
    f[0][0]=0;
    for(int i=1;i<=1000;i++){f[0][i]=INT_MAX;f[i][0]=INT_MAX;}

    int t;cin>>t;
    while(t--){
        int row,col; cin>>row>>col; 
        for(int i=1;i<=row;i++) for(int j=1;j<=col;j++) cin>>a[i][j];
        cout<<result(row,col)<<endl;
    }
}