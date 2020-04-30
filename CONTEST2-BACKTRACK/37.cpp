#include <iostream>
using namespace std;

// n dinh, m canh
// adjacencyMatrix luu ma tran ke n dinh m canh
// MAX so canh di max
int n,m,matrix[50][50],MAX;


// temp dem so canh di
void process(int i,int temp){
    for(int j=1;j<=n;j++){
        if(matrix[i][j]){
            matrix[i][j]=0; matrix[j][i]=0; temp++;
			MAX= MAX<temp?temp:MAX;
            process(j,temp);
            matrix[i][j]=1; matrix[j][i]=1; temp--;
        }
    }
}

main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>m;
        
        //gan matran ke ban dau bang 0
        for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) matrix[i][j]=0;
        
        // nhap ma tran ke theo u,v
        for(int i=1;i<=m;i++){
            int u,v; cin>>u>>v;
            matrix[u+1][v+1]=1;
            matrix[v+1][u+1]=1;
        }
        
        MAX=0;
        
        //voi moi dinh thi quay lui vet can duong di
        for(int i=1;i<=n;i++)
        	process(i,0);
        	
        	
        cout<<MAX<<endl;
        
    }
}
