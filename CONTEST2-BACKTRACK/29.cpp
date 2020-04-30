#include <iostream>
using namespace std;
int a[50][50]={0},m,n,checkCase;

void backTracking(int x,int y){
   if(x+1<=m&&y<=n){ backTracking(x+1,y);}
   if(x<=m&&y+1<=n){ backTracking(x,y+1);}
        if(x==m&&y==n) checkCase++;
}

main(){
    int t; cin>>t;
    while(t--){

        checkCase=0;
        cin>>m>>n; for(int i=1;i<=m;i++) for(int j=1;j<=n;j++) cin>>a[i][j];
        backTracking(1,1);
        cout<<checkCase;
        cout<<endl;
    }
}
