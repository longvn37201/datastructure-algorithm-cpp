#include <bits/stdc++.h>
using namespace std;
string s1,s2,s3;
int matrix[101][101][101];
int something(){
    int result;
    for(int i=1;i<=s1.size();i++){
        for(int j=1;j<=s2.size();j++){
            for(int k=1;k<=s3.size();k++){
                if(s1[i-1]==s2[j-1]&&s1[i-1]==s3[k-1]){
                    matrix[i][j][k]=matrix[i-1][j-1][k-1]+1;
                }else{
                    matrix[i][j][k]= max(
                                        max(matrix[i-1][j][k],matrix[i][j-1][k]),
                                        matrix[i][j][k-1]
                                        );
                }

            }
        }
    }return matrix[s1.size()][s2.size()][s3.size()];
}

main(){
    int t;cin>>t;
    while(t--){
        cin>>s1>>s2>>s3;
        cin>>s1>>s2>>s3;
        cout<<something()<<endl;
    }
}