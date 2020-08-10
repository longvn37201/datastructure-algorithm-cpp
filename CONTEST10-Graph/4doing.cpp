#include <iostream>
using namespace std;

// a[][] luu input
// b[][] danh dau cac a[i][j] da dung
// result luu ket qua 
// temp la bien chay cua result
// checkCase kiem tra xem neu khong co result thi output -1
int a[500][500],b[500][500]={0},result[1000000]={0},X0,Y0,X,Y,temp,checkCase;
int row,col;
void output(){
string t="";
    for(int i=1;i<=1000000;i++){
        if(result[i]==1) t+='D';
        if(result[i]==2)  t+='L';
        if(result[i]==3) t+='R';
        if(result[i]==4) t+='U';
    }
    int count=0;
   for(int i=1;i<t.size();i++){
       if(t[i]!=t[i-1]) count++;
   }
   if(count<=2) checkCase=1;
}

void callback(int x,int y){
    if(checkCase==1) return;
    if(x==X&&y==Y) {
	   	output();
           return;
	   	// checkCase++;
   }
    //D
    if(checkCase==1) return;
    if(x<row-1&&(a[x+1][y]==1||a[x+1][y]==2)&&b[x+1][y]==0) {
        result[temp++]=1;  b[x+1][y]=1;
        callback(x+1,y);
        result[--temp]=0; b[x+1][y]=0;
    }   
if(checkCase==1) return;
   //L
    if(y>0&&(a[x][y-1]==1||a[x][y-1]==2)&&b[x][y-1]==0) {
       result[temp++]=2; b[x][y-1]=1;
       callback(x,y-1);
       result[--temp]=0;b[x][y-1]=0;
   }
if(checkCase==1) return;
   //R
    if(y<col-1&&(a[x][y+1]==1||a[x][y+1]==2)&&b[x][y+1]==0) {
        result[temp++]=3;  b[x][y+1]=1;
        callback(x,y+1);
        result[--temp]=0; b[x][y+1]=0;
    }
if(checkCase==1) return;
   //U   
    if(x>0&&(a[x-1][y]==1||a[x-1][y]==2)&&b[x-1][y]==0) {
       result[temp++]=4; b[x-1][y]=1;
       callback(x-1,y);
       result[--temp]=0;b[x-1][y]=0;
   }   
if(checkCase==1) return;
//    if(x==X&&y==Y) {
// 	   	output();
// 	   	// checkCase++;
//    }
   
        
}

main(){
    int t; cin>>t;
    while(t--){
		// b[1][1]=1; 
//		b[0][0]=1;
        cin>>row>>col;
        temp=1,checkCase=0;
         for(int i=0;i<row;i++) {
             string temp; cin>>temp;
             for(int j=0;j<col;j++){
                 if(temp[j]=='.') a[i][j]=1;
                 if(temp[j]=='*') a[i][j]=0;
                 if(temp[j]=='S') {a[i][j]=-1; X0=i;Y0=j;}
                 if(temp[j]=='T') {a[i][j]=2; X=i;Y=j;}
             }
         }
//        a[0][0]=0;
        // if(a[1][1]==0||a[n][n]==0) ;
        callback(X0,Y0);
        if(checkCase==1) cout<<"YES"; else cout<<"NO";
        cout<<endl;
    }
}
