

#include <bits/stdc++.h>
using namespace std;
string s1,s2;
int f[101][101];

// dynamic magic 
// IF s1[i]=s1[j] THEN f[i][j]=f[i-1]][j-1]
// ELSE f[i][j]=min(insert,delete,replace)=1+min(f[i][j-1],f[i-1][j],f[i-1][j-1])
// base case: i=0=> f[i][j]=j; j=0=>f[i][j]=i

int res(){
    for(int i=0;i<=s1.size();i++){
        for(int j=0;j<=s2.size();j++){

            //base case size() 1 trong 2 day bang 0
            if(!i) f[i][j]=j;
            if(!j) f[i][j]=i;

            //khi size 2 day !=0
            if(i>0&&j>0){
                if(s1[i-1]==s2[j-1]) f[i][j]=f[i-1][j-1];  
                else f[i][j]=min(
                        min(f[i-1][j],f[i][j-1]),
                        f[i-1][j-1]
                    )+1;
            }
        }
    }
    return f[s1.size()][s2.size()];
}

main(){

    int t;cin>>t;
    while(t--){
       cin>>s1>>s2;
       cout<<res()<<endl;
    }
}