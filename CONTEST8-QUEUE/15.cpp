
#include <bits/stdc++.h> 
using namespace std; 

int table[1005][1005];
int vs[1005][1005];
int matrix[1005][1005];
int m,n;
int minWay(int i,int j){
    if(i==m-1&&j==n-1) return 0;
    if(i>=m||j>=n) return 9999999;

    if(vs[i][j]) return table[i][j];
    vs[i][j]=1;

    table[i][j]=1+ min(
                        minWay( i+matrix[i][j], j ),
                        minWay(i, j+matrix[i][j])
                         );
    return table[i][j];                     
}

int main() 
{ 
    int t; cin>>t;
    while(t--){
         cin>>m>>n;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                cin>>matrix[i][j];
                vs[i][j]=0;
            }
        int temp=minWay(0,0);
        if(temp>m*n) cout<<-1;
        else cout<<temp;
        cout<<endl;    
    }


	return 0; 
} 

