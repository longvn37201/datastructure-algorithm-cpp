#include <iostream>
using namespace std;

// a[][] luu input
// result luu ket qua 
// temp la bien chay cua result
// checkCase kiem tra xem neu khong co result thi output -1
int a[20][20],result[31],n,temp,checkCase;

//output
void output(){
    for(int i=1;i<=30;i++){
        if(result[i]==1) cout<<"D";
        if(result[i]==2) cout<<"R";
    }
    cout<<" ";
}

//de quy xu li
void backTracking(int x,int y){
   if(a[x+1][y]==1) {
       result[temp]=1; temp++;
       backTracking(x+1,y);
       result[--temp]=0;
   }   
   if(a[x][y+1]==1) {
       result[temp]=2; temp++;
       backTracking(x,y+1);
       result[--temp]=0;
   }   

   if(x==n&&y==n) {
	   	output();
	   	checkCase++;
   }
   
        
}

main(){
    int t; cin>>t;
    while(t--){

        temp=1,checkCase=0;
        cin>>n; for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin>>a[i][j];
        if(a[1][1]==0||a[n][n]==0) ;
        else backTracking(1,1);
        if(!checkCase) cout<<-1;
        cout<<endl;
    }
}
