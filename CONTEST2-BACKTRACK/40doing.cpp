#include <iostream>
using namespace std;

int n,matrix[20][20],mark[20][20],result=0,MIN=999999;

void backtrack(int i,int temp,int index){
    for(int j=2;j<=n;j++){
        if(mark[i][j]){
            if(index!=n){
                temp+=matrix[i][j];
                mark[i][j]=0; mark[j][i]=0;
            }
            if(index==n){ 
                if(result>temp+matrix[i][1]) result=temp+matrix[i][1];
            }
            else {
                if(temp+(n-i+1)*MIN<result)
                backtrack(j,temp,index+1);
            }
                mark[i][j]=1; mark[j][i]=1;
                temp-=matrix[i][j];
            
        }
    }
}
main(){
    cin>>n; 
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) {cin>>matrix[i][j]; if(matrix[i][j]) mark[i][j]=1;if(matrix[i][j]!=0&&matrix[i][j]<MIN)MIN=matrix[i][j];}
    for(int i=1;i<n;i++)  result+=matrix[i][i+1]; result+=matrix[n][1];
    backtrack(1,0,1);
    cout<<result;
}